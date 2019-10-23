// Came across Video by Gaurav Sen about TimSort
// This is the Naive implementation of the same.

// Video URL
// https://www.youtube.com/watch?v=emeME__917E

// Tim Sort is a Hybrid Sort used by Java and Python
// The sorting algorithms like Quick Sort and Merge Sort even though being
// asymtotically best lack performance whenit comes to small data chunks as 
// they have high constant factors. 

// So to avoid this issue after a lot of experimentation and inferences a hybrid 
// algorithm is designed which first breaks down the chunks into 32-64 sized chunks.
// Then algorithm applies insertionSort on each of the chunks.

// After applying insertion sort it applies merge operation on all the smaller chunks.

// The actual algorithm also uses the nature of the data to select chunks and dynamically selects 
// chunks. The chunks are sorted using Binary Insertion Sort. But for ease of coding and understanding 
// fixed chunks are selected here. 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std; 
const int chunk = 2; 
  
// Take small chunks and sorts them inplace. 
void InsertionSort(int A[], int l, int r){
    for(int i = l+1; i < r ; i++){
        int value = A[i] ;
        int j ;
        // Traverse the array from behind and keep pushing the element until we come across a smaller value.
        // If we come across a smaller value then we break and insert the element. 
        for(j = i ; j > 0 ; j--){
            if(A[j-1] > value){
                A[j] = A[j-1] ;
            }
            else break ;
        }
        A[j] = value ;
    }
}


// Copy the elements into temporary arrays
// Then apply the Merge operation in the actual array
void Merge(int A[], int l, int r, int m){
    int n1 = m-l+1 ;
    int n2 = r-m;
    int L[n1], R[n2] ;
    
    for(int i = 0; i < n1 ; i++){
        L[i] = A[l+i] ;
    }

    for(int i = 0; i < n2 ; i++){
        R[i] = A[m+1+i] ;
    }

    int i = 0, j = 0, k = l ;
    while(i < n1 && j < n2){
        if(L[i] < R[j]){
            A[k] = L[i] ;
            i++ ;
        }
        else{
            A[k] = R[j] ;
            j++ ;
        }
        k++ ;
    }

    while(i < n1){
        A[k] = L[i] ;
        i++ ;
        k++ ;
    }

    while(j < n2){
        A[k] = R[j] ;
        j++ ;
        k++ ;
    }
}
  
// TimSort function which takes the array as input along with array size
void timSort(int A[], int n) 
{ 
    // Call insertionSort for all chunks
    for (int i = 0; i < n; i+=chunk) 
        InsertionSort(A, i, min((i+31), (n-1))); 
  
    // Apply merge operation using the chunk size as reference recursively.
    // After each operation we will have chunks of size 2*chunk sorted. 
    for (int size = chunk; size < n; size = 2*size) 
    { 
        // Merge 2 consecutive chunks at a time. 
        for (int l = 0; l < n; l += 2*size) 
        {  
            // Now mid is required as the mid depends on the size of the chunk
            // Size of the chunk is doubled after every every level of recursive tree.
            // Check if r is exceeding the value of the array size and then call thhe Merge function.
            int m = l + size - 1; 
            int r = min((l + 2*size - 1), (n-1)); 
  
            // merge sub array arr[left.....mid] & 
            // arr[mid+1....right] 
            Merge(A, l, r, m); 
        } 
    } 
} 
  
void Print(int A[], int n){
    for(int i = 0; i < n ; i++){
        cout << A[i] << " " ;
    }
    cout << endl ;
}
  
int main(){
    int A[] = {2,7,4,1,5,3};
    int n = sizeof(A)/sizeof(A[0]); 
    cout << "Original Array : " ;
    Print(A, 6) ;
    cout << "Sorted Array : " ;
    timSort(A, n); 
    Print(A, 6) ;
}