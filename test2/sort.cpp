#include <iostream>
#include "sort.h"

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    int arr1[]={5,3,1,4,2};
    int arr2[]={8,6,7,4,9};
    int size = 5;

    std::cout<<"Insertion sort: ";
    insertionSort(arr1,size);
    printArray(arr1,size);

    std::cout<<"Selection sort: ";
    selectionSort(arr2,size);
    printArray(arr2,size);

    return 0;
}