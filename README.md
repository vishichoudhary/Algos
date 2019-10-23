# Algos
  This repository contains 6 C++ programs that sorts arrays with diffrent algroithms.
  
# Contents
  1. [Bubble Sort](#bubble-sort)
  2. [Heap Sort](#heap-sort)
  3. [Instertion Sort](#insertion-sort)
  4. [Merge Sort](#merge-sort)
  5. [Quick Sort](#quick-sort)
  6. [Selection Sort](#selection-sort)
  
## Bubble Sort
  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
* [Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvQnViYmxlX3NvcnQ)
* [GeeksForGeeks](http://www.geeksforgeeks.org/bubble-sort/)
    <p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Bubblesort-edited-color.svg/330px-Bubblesort-edited-color.svg.png" alt="bubble"/>
</p>
  
## Heap Sort
Heap sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.
* [Wikipedia](https://en.0wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvSGVhcHNvcnQ)
* [GeeksForGeeks](http://www.geeksforgeeks.org/heap-sort/)
    <p align="center">
  <img src="https://en.0wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zLzEvMWIvU29ydGluZ19oZWFwc29ydF9hbmltLmdpZg" alt="heap"/>
</p>

## Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
* [Wikipedia](https://en.0wikipedia.org/wiki/Insertion_sort)
* [GeeksForGeeks](http://www.geeksforgeeks.org/insertion-sort/)
    <p align="center">
  <img src="http://www.geeksforgeeks.org/wp-content/uploads/gq/2013/03/Insertion-Sort-300x257.jpg" alt="instertion"/>
</p>
    
## Merge Sort
Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
* [Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)
* [GeeksForGeeks](http://www.geeksforgeeks.org/merge-sort/)
    <p align="center">
  <img src="https://en.0wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zL2MvY2MvTWVyZ2Utc29ydC1leGFtcGxlLTMwMHB4LmdpZg" alt="merge"/>
</p>

## Quick Sort
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

-Always pick first element as pivot.
-Always pick last element as pivot (implemented below)
-Pick a random element as pivot.
-Pick median as pivot.
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
* [Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvUXVpY2tzb3J0)
* [GeeksForGeeks](http://www.geeksforgeeks.org/quick-sort/)
    <p align="center">
  <img src="https://en.0wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zLzYvNmEvU29ydGluZ19xdWlja3NvcnRfYW5pbS5naWY" alt="quick"/>
</p>

## Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
* [Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvU2VsZWN0aW9uX3NvcnQ)
* [GeeksForGeeks](http://www.geeksforgeeks.org/selection-sort/)
    <p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/b/b0/Selection_sort_animation.gif" alt="selection"/>
</p>

## Tim Sort
Tim Sort is a Hybrid Sort used by Java and Python. The sorting algorithms like Quick Sort and Merge Sort even though being asymtotically best lack performance whenit comes to small data chunks as they have high constant factors. So to avoid this issue after a lot of experimentation and inferences a hybrid algorithm is designed which first breaks down the chunks into 32-64 sized chunks. Then algorithm applies insertionSort on each of the chunks. After applying insertion sort it applies merge operation on all the smaller chunks.
The actual algorithm also uses the nature of the data to select chunks and dynamically selects chunks. The chunks are sorted using Binary Insertion Sort. 

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
* [Wikipedia](https://en.wikipedia.org/wiki/Timsort)
* [GeeksForGeeks](https://www.geeksforgeeks.org/timsort/)
