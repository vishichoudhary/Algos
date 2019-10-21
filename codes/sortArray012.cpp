/*
PROBLEM STATEMENT : 
  Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. 
  The functions should put all 0s first, then all 1s and all 2s in last.
*/

// C++ program to sort an array 
// with 0, 1 and 2 in a single pass 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to sort the input array, 
// the array is assumed 
// to have values in {0, 1, 2} 
void sort012(int a[], int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
  
    // Iterate till all the elements 
    // are sorted 
    while (mid <= hi) { 
        switch (a[mid]) { 
  
        // If the element is 0 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
        } 
    } 
} 
  
// Function to print array arr[] 
void printArray(int arr[], int arr_size) 
{ 
    // Iterate and print every element 
    for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " ";
        cout<<endl; 
} 
  
// Driver Code 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Original Array : ";
    printArray(arr,n);
    sort012(arr, n); 
    cout << "After Sorting, array becomes : ";
    printArray(arr, n); 
  
    return 0; 
} 

/*
OUTPUT:
5
2 1 0 1 0
Original Array : 2 1 0 1 0
After Sorting, array becomes : 0 0 1 1 2
*/