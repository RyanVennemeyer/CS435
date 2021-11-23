
class insertionsortselect {
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
 
    /* A utility function to print array of size n*/
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
 
        System.out.println();
    }
 
    // Driver method
    public static void main(String args[])
    {
        int arr[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
        ///{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14, 15, 16 ,17, 18, 19, 20 ,21 ,22 ,23, 24, 25 ,26, 27, 28, 29 ,30, 31 ,32}
        ///{32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 }
        int k = arr.length/2;
        final long startTime = System.nanoTime();
        insertionsortselect ob = new insertionsortselect();
        ob.sort(arr);
        final long endTime = System.nanoTime();
        printArray(arr);
        System.out.println("Total execution time: " + (endTime - startTime));
        System.out.println("K'th number (n/2): ");
        System.out.println(k);
        System.out.println(arr[k-1]);
    }
} 