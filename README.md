# Algos
  This repository contains 6 C++ programs that sorts arrays with diffrent algroithms.
  
## Bubble Algorithm
  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
* [Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvQnViYmxlX3NvcnQ)
* [GeeksForGeeks](http://www.geeksforgeeks.org/bubble-sort/)
    <p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Bubblesort-edited-color.svg/330px-Bubblesort-edited-color.svg.png" alt="bash logo"/>
</p>
  
## Heap Sort
Heap sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.
*[Wikipedia](https://en.0wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvSGVhcHNvcnQ)
*[GeeksForGeeks](http://www.geeksforgeeks.org/heap-sort/)
    <p align="center">
  <img src="https://en.wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zLzEvMWIvU29ydGluZ19oZWFwc29ydF9hbmltLmdpZg" alt="bash logo"/>
</p>

## Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
*[Wikipedia](https://en.0wikipedia.org/wiki/Insertion_sort)
*[GeeksForGeeks](http://www.geeksforgeeks.org/insertion-sort/)
    <p align="center">
  <img src="http://www.geeksforgeeks.org/wp-content/uploads/gq/2013/03/Insertion-Sort-300x257.jpg" alt="bash logo"/>
</p>
    
## Merge Sort
Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
*[Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)
*[GeeksForGeeks](http://www.geeksforgeeks.org/merge-sort/)
    <p align="center">
  <img src="https://en.0wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zL2MvY2MvTWVyZ2Utc29ydC1leGFtcGxlLTMwMHB4LmdpZg" alt="bash logo"/>
</p>

## Quick Sort
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

-Always pick first element as pivot.
-Always pick last element as pivot (implemented below)
-Pick a random element as pivot.
-Pick median as pivot.
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
*[Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvUXVpY2tzb3J0)
*[GeeksForGeeks](http://www.geeksforgeeks.org/quick-sort/)
    <p align="center">
  <img src="https://en.0wikipedia.org/index.php?q=aHR0cDovL3VwbG9hZC53aWtpbWVkaWEub3JnL3dpa2lwZWRpYS9jb21tb25zLzYvNmEvU29ydGluZ19xdWlja3NvcnRfYW5pbS5naWY" alt="bash logo"/>
</p>

## Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
*[Wikipedia](https://en.wikipedia.org/index.php?q=aHR0cHM6Ly9lbi53aWtpcGVkaWEub3JnL3dpa2kvU2VsZWN0aW9uX3NvcnQ)
*[GeeksForGeeks](http://www.geeksforgeeks.org/selection-sort/)
    <p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/b/b0/Selection_sort_animation.gif" alt="bash logo"/>
</p>
