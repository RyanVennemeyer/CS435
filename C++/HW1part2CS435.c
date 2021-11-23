#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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


int main() {
    srand ( time(NULL) );

    int n = 100;
    int rannum[n];

    for (int f = 0; f < n ;f++) {
        rannum[f] = rand()%10000;
    }
    
    int num = sizeof(rannum) / sizeof(rannum[0]);
    
    
    
    printf("Before sort");
    printf("\n");
    printsort(rannum , num);
    insertionSort(rannum , num);
    
    printf("After sort");
    printf("\n");
    printsort(rannum , num);

    printf("compcount = %d",compcount);

}