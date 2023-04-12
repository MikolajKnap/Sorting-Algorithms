#include "lib_simpleSorting.h"

void selectionSort(int* array, int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(array[j] < array[min]) min = j;
        }
        std::swap(array[i],array[min]);
    }
}

void insertionSort(int* array, int n){
    for(int i = 1; i < n; i++){
        int aux = array[i];
        int j = i-1;
        for(j; j >= 0; j--){
            if(array[j] > aux) array[j+1] = array[j];
            else break;
        }
        array[j+1] = aux;
    }
}

void bubbleSort(int* array, int n){
    for(int i = 1; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(array[j] < array[j-1])
                std::swap(array[j],array[j-1]);
        }
    }
}