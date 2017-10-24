# Algos
This repo will hold algorithms written in cpp
Bubble Sort-
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Link of an Algorithm is https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm

Heap Sort-
Heap sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.

Link of an Algorithm is https://www.programiz.com/dsa/heap-sort

Insertion sort-
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

Link of an Algorithm is https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm

Merge sort-
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. See following C implementation for details.


Link of an Algorithm is https://www.tutorialspoint.com/design_and_analysis_of_algorithms/design_and_analysis_of_algorithms_merge_sort.htm

Qsort-
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

Always pick first element as pivot.
Always pick last element as pivot (implemented below)
Pick a random element as pivot.
Pick median as pivot.
The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x.


Link of an Algorithm is https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm


Selection sort-
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

Link of an Algorithm is https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm
