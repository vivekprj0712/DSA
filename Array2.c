#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int arr[SIZE];
void insertElement(){

    int location,data,index,i;
    printf("\nEnter Data: ");
    scanf("%d" , &data);

    printf("\nEnter Insert Location: ");
    scanf("%d" , &location);

    index = location-1;

    for(i=SIZE-1 ; i>index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = data;
}
void removeElement(){

}
void display(){
    int i;
    printf("The Elements in the array :");
    for(i = 0 ; i < SIZE ; i++ ){
        printf(" %d" , arr[i]);
    }
}

int main(){
    int choice;
    printf("\n1 For InsertElement\n2 For RemoveElement\n3 For Display\n4 For Exit");
    while(1){
       printf("\nEnter Your Choice: ");
       scanf("%d",&choice);
        switch(choice){
            case 1: insertElement();
                    break;
            
            case 2: removeElement();
                    break;
            
            case 3: display();
                    break;
            
            case 4: exit(0);

            default : printf("\nInvalid Choice!!");
                      break;      
        }
    }
    return 0;
}