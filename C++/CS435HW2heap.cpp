#include<iostream>
#include <chrono>
#include<vector>
#include <algorithm>
#include <cmath>

using namespace std;

using namespace std::chrono;

int comp;
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
   int largest = i; // Initialize largest as root
   int l = 2*i + 1; // left = 2*i + 1
   int r = 2*i + 2; // right = 2*i + 2

   // If left child is larger than root
   if (l < n && arr[l] > arr[largest])
       largest = l;

   // If right child is larger than largest so far
   if (r < n && arr[r] > arr[largest])
       largest = r;

   // If largest is not root
   if (largest != i)
   {
       swap(arr[i], arr[largest]);

       // Recursively heapify the affected sub-tree
       heapify(arr, n, largest);
   }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
   // Build heap (rearrange array)
   for (int i = n / 2 - 1; i >= 0; i--)
       heapify(arr, n, i);

   // One by one extract an element from heap
   for (int i=n-1; i>0; i--)
   {
       // Move current root to end
       swap(arr[0], arr[i]);
       comp = comp+1;

       // call max heapify on the reduced heap
       heapify(arr, i, 0);
   }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
       cout << arr[i] << " ";
   cout << "\n";
}

// Driver program
int main()
{
///part2  pow(2,10)
    int num = pow(2,18);
    int randArray[num];
    for(int i=0;i<num;i++)
        randArray[i]=rand()%10000;


   int Sarr[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
   int UNarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18, 19, 20 ,21 ,22 ,23, 24, 25 ,26, 27, 28, 29 ,30, 31 ,32};
   int randarr_size = sizeof(randArray) / sizeof(randArray[0]);
   int Sarr_size = sizeof(Sarr) / sizeof(Sarr[0]);
   int UNarr_size = sizeof(UNarr) / sizeof(UNarr[0]);




   ///int arr[] = {12, 11, 13, 5, 6, 7};
   ///int n = sizeof(arr)/sizeof(arr[0]);
///sorted
/*
    cout << "Given array is \n";
   printArray(Sarr, Sarr_size);  
    auto start = high_resolution_clock::now();
   heapSort(Sarr, Sarr_size);
    auto stop = high_resolution_clock::now();
   cout << "Sorted array is \n";
   printArray(Sarr, Sarr_size);
    auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;
   */
///unsorted
/*
   cout << "Given array is \n";
   printArray(UNarr, UNarr_size);  
    auto start = high_resolution_clock::now();
   heapSort(UNarr, UNarr_size);
    auto stop = high_resolution_clock::now();
   cout << "Sorted array is \n";
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
   heapSort(randArray, randarr_size);
    auto stop = high_resolution_clock::now();
   cout << "Sorted array is \n";
   printArray(randArray, randarr_size);
    auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;

    return 0;
}