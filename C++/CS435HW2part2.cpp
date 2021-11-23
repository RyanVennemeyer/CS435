// C++ program for Merge Sort
#include<iostream>
#include <chrono>
#include<vector>
#include <algorithm>

using namespace std;

using namespace std::chrono;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
int comp;
void merge(int arr[], int l, int m, int r)
{
   int n1 = m - l + 1;
   int n2 = r - m;

   // Create temp arrays
   int L[n1], R[n2];

   // Copy data to temp arrays L[] and R[]
   for(int i = 0; i < n1; i++)
       L[i] = arr[l + i];
   for(int j = 0; j < n2; j++)
       R[j] = arr[m + 1 + j];

   // Merge the temp arrays back into arr[l..r]
  
   // Initial index of first subarray
   int i = 0;
  
   // Initial index of second subarray
   int j = 0;
  
   // Initial index of merged subarray
   int k = l;
  
   while (i < n1 && j < n2)
   {
       if (L[i] <= R[j])
       {
           arr[k] = L[i];
           i++;
           comp = comp+1;
       }
       else
       {
           arr[k] = R[j];
           j++;
           comp = comp+1;
       }
       k++;
       comp = comp+1;
   }

   // Copy the remaining elements of
   // L[], if there are any
   while (i < n1)
   {
       arr[k] = L[i];
       i++;
       k++;
   }

   // Copy the remaining elements of
   // R[], if there are any
   while (j < n2)
   {
       arr[k] = R[j];
       j++;
       k++;
   }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
   if (l < r)
   {
      
       // Same as (l+r)/2, but avoids
       // overflow for large l and h
       int m = l + (r - l) / 2;

       // Sort first and second halves
       mergeSort(arr, l, m);
       mergeSort(arr, m + 1, r);

       merge(arr, l, m, r);
   }
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
   for(int i = 0; i < size; i++)
       cout << A[i] << " ";
}



// Driver code
int main()
{
    int num = 32;
    int randArray[num];
    for(int i=0;i<num;i++)
        randArray[i]=rand()%10000;


   int Sarr[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
   int UNarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18, 19, 20 ,21 ,22 ,23, 24, 25 ,26, 27, 28, 29 ,30, 31 ,32};
   int randarr_size = sizeof(randArray) / sizeof(randArray[0]);
   int Sarr_size = sizeof(Sarr) / sizeof(Sarr[0]);
   int UNarr_size = sizeof(UNarr) / sizeof(UNarr[0]);



/*
    ///sorted
   cout << "Given array is \n";
   printArray(Sarr, Sarr_size);

    auto start = high_resolution_clock::now();

   mergeSort(Sarr, 0, Sarr_size - 1);

    auto stop = high_resolution_clock::now();

   cout << "\nSorted array is \n";
   printArray(Sarr, Sarr_size);

   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;
*/
   ///revese
/*
   cout << "Given array is \n";
   printArray(UNarr, UNarr_size);

    auto start = high_resolution_clock::now();

   mergeSort(UNarr, 0, UNarr_size - 1);

    auto stop = high_resolution_clock::now();

   cout << "\nSorted array is \n";
   printArray(UNarr, UNarr_size);

   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;



   /// Random

   cout << "Given array is \n";
   printArray(randArray, randarr_size);

    auto start = high_resolution_clock::now();

   mergeSort(randArray, 0, randarr_size - 1);

    auto stop = high_resolution_clock::now();

   cout << "\nSorted array is \n";
   printArray(randArray, randarr_size);

   auto duration = duration_cast<microseconds>(stop - start);
   cout << endl;
   cout << "comp count : "<< comp << endl;
   
   cout << "time : " << duration.count() << " microseconds" << endl;

*/
   return 0;
}

