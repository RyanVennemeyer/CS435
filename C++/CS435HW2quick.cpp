#include <bits/stdc++.h>
#include<iostream>
#include <chrono>
#include<vector>
#include <algorithm>
#include <cmath>

using namespace std;

using namespace std::chrono;
int comp;
// A utility function to swap two elements
void swap(int* a, int* b)
{
   int t = *a;
   *a = *b;
   *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
   int pivot = arr[high]; // pivot
   int i = (low - 1); // Index of smaller element

   for (int j = low; j <= high - 1; j++)
   {
       // If current element is smaller than the pivot
       if (arr[j] < pivot)
       {
           i++; // increment index of smaller element
           swap(&arr[i], &arr[j]);
       }
   }
   swap(&arr[i + 1], &arr[high]);
   return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
   if (low < high)
   {
       /* pi is partitioning index, arr[p] is now
       at right place */
       int pi = partition(arr, low, high);
        comp = comp +1;
       // Separately sort elements before
       // partition and after partition
       quickSort(arr, low, pi - 1);
       quickSort(arr, pi + 1, high);
   }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
   int i;
   for (i = 0; i < size; i++)
       cout << arr[i] << " ";
   cout << endl;
}

// Driver Code
int main()
{
   int num = pow(2,18);
    int randArray[num];
    for(int i=0;i<num;i++)
        randArray[i]=rand()%10000;


   int Sarr[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
   int UNarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18, 19, 20 ,21 ,22 ,23, 24, 25 ,26, 27, 28, 29 ,30, 31 ,32};
   int randarr_size = sizeof(randArray) / sizeof(randArray[0]);
   int Sarr_size = sizeof(Sarr) / sizeof(Sarr[0]);
   int UNarr_size = sizeof(UNarr) / sizeof(UNarr[0]);
/*
///UNsorted
   cout << "Given array is \n";
   printArray(Sarr, Sarr_size);

   auto start = high_resolution_clock::now();

   quickSort(Sarr, 0, Sarr_size - 1);

    auto stop = high_resolution_clock::now();
   
   cout << "Sorted array: \n";
   printArray(Sarr, Sarr_size);
   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;
   */
///sorted
/*
cout << "Given array is \n";
   printArray(UNarr, UNarr_size);

   auto start = high_resolution_clock::now();

   quickSort(UNarr, 0, UNarr_size - 1);

    auto stop = high_resolution_clock::now();
   
   cout << "Sorted array: \n";
   printArray(UNarr, UNarr_size);
   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;
   */
   ///random
   
   cout << "Given array is \n";
   printArray(randArray, randarr_size);

   auto start = high_resolution_clock::now();

   quickSort(randArray, 0, randarr_size - 1);

    auto stop = high_resolution_clock::now();
   
   cout << "Sorted array: \n";
   printArray(randArray, randarr_size);
   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;
   
   return 0;
}