
import java.io.*;

import java.lang.Math;

import java.util.Random;

class quicksortselect{
      
// A utility function to swap two elements
static void swap(int[] arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
  

static int partition(int[] arr, int low, int high)
{
      
    // pivot
    int pivot = arr[high]; 
      
    // Index of smaller element and
    // indicates the right position
    // of pivot found so far
    int i = (low - 1); 
  
    for(int j = low; j <= high - 1; j++)
    {
          
        // If current element is smaller 
        // than the pivot
        if (arr[j] < pivot) 
        {
              
            // Increment index of 
            // smaller element
            i++; 
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}
  
/* The main function that implements QuickSort
          arr[] --> Array to be sorted,
          low --> Starting index,
          high --> Ending index
 */
static void quickSort(int[] arr, int low, int high)
{
    if (low < high) 
    {
          
        // pi is partitioning index, arr[p]
        // is now at right place 
        int pi = partition(arr, low, high);
  
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
  
    /*Function to sort array using insertion sort*/
    void sort(int arr[])
    {
        int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
 
            /* Move elements of arr[0..i-1], that are
               greater than key, to one position ahead
               of their current position */
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
 
// Function to print an array 
static void printArray(int[] arr, int size)
{
    for(int i = 0; i < size; i++)
        System.out.print(arr[i] + " ");
          
    System.out.println();
}
  
public static void main(String[] args)
{
    ///int[] arr = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
    ///{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18, 19, 20 ,21 ,22 ,23, 24, 25 ,26, 27, 28, 29 ,30, 31 ,32}
    ///{32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 }
    /*double num = Math.pow(2,18);
    double randArray[num];
    for(int i=0;i<num;i++)
        randArray[i]=Math.rand()%10000;
        */


    Random rd = new Random(); // creating Random object
    int[] arr = new int[1000000];
    for (int i = 0; i < arr.length; i++) {
       arr[i] = rd.nextInt();
    }
    
    int n = arr.length;
    int k = arr.length/2;
    

    final long startTime = System.nanoTime();

    if (n > 25){
        System.out.println("N is over 25");
        quicksortselect ob = new quicksortselect();
        ob.sort(arr);

    }else{
        System.out.println("N is under 25");
        
        quickSort(arr, 0, n - 1);
    }
    

    final long endTime = System.nanoTime();


    System.out.println("Sorted array: ");
    printArray(arr, n);
    System.out.println("Total execution time: " + (endTime - startTime));
    System.out.println("K'th number (n/2): "+k);
    System.out.println("the K numberin the array is  ");
    System.out.println(arr[k-1]);
}
}