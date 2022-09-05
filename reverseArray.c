#include "stdio.h"
/// program to reverse the array
void reverse(int array[],int arraySize);
void printArr(int* array,int arraySize);

int main(){
    int size;
    int array[size];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter the number: ");
        scanf("%d",&array[i]);
    }


    printf("original array-->");
    printArr(array,size);
    printf("\nREversed array-->");
    reverse(array,size);
    printArr(array,size);
    return 0;
}


void reverse(int array[],int arraySize){
    int* pointer1=array;
    int* pointer2=array+arraySize-1;
    while(pointer1<pointer2){
        swap(pointer1,pointer2);
        pointer1++;
        pointer2--;
    }
}

void printArr(int* array,int arraySize){
    int* length=array+arraySize;
    int* position=array;
    for(position=array;position<length;position++){
        printf("%d ",*position);
    }
}