#include <stdio.h>
#include <stdlib.h>
int compcount = 0; 
void printsort(int arr[], int n){
    for(int i = 0; i<n; i++) {
        printf("%d ",arr[i]);
        
    }
    printf("\n");

}

void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1;
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
           compcount++;
       } 
       arr[j+1] = key; 
   } 
} 

void randarr(int n){
    int x;
}

int main() {
    /* {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32} */
    /* {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1} */
    int numarr;
    int array[] = {32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("How big of an array?\n");
    scanf("%d",&numarr);
    int randarr[numarr],i;
    for(int i = 0; i<numarr;i++)
        randarr[i]=rand()%100;


    printf("Before sort");
    printf("\n");
    printsort(array , n);
    insertionSort(array , n);
    
    printf("After sort");
    printf("\n");
    printsort(array , n);

    printf("compcount = %d",compcount);

}