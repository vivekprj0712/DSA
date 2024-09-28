#include<stdio.h>
#define SIZE 5

//global
int a[SIZE];
int i;

void scanArray(){
    for(i = 0 ; i < SIZE ; i++ ){
        printf("Enter Element %d : " ,i);
        scanf("%d" , &a[i]);
    }
}

void printArray(){
    printf("The Elements in the array :");
    for(i = 0 ; i < SIZE ; i++ ){
        printf(" %d" , a[i]);
    }
}

int main(){
    scanArray();
    printArray();
}