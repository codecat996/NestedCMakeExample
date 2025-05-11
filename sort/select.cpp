#include "sort.h"

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minTdx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minTdx]){
                minTdx=j;
            }
        }
        if(minTdx!=i){
            int temp=arr[minTdx];
            arr[minTdx]=arr[i];
            arr[i]=temp;
        }
    }
}