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
    int location,i;
    printf("\nEnter Delete Location: ");
    scanf("%d", &location);
    if((location-1) < SIZE){
    for(i = location-1 ; i < SIZE ; i++){
        arr[i] = arr[i+1];
        }
        printf("\nLocation Deleted!!");
    }else{
        printf("\nInvalid Location!");
    }

}
void searchElement(){ // linearSearch or sequentialSearch (O(n))
    int key,i,flag=0;
    printf("\nEnter Found Element: ");
    scanf("%d", &key);
    for(i=0;i<SIZE;i++){
        if(arr[i] == key){
            printf("\n%d Element is found!",key);
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("\n%d Element is not found!",key);
    }
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
    while(1){
    printf("\n1 For InsertElement\n2 For RemoveElement\n3 For Display\n4 For SearchElement\n5 For Exit");
       printf("\nEnter Your Choice: ");
       scanf("%d",&choice);
        switch(choice){
            case 1: insertElement();
                    break;
            
            case 2: removeElement();
                    break;
            
            case 3: display();
                    break;
            
            case 4: searchElement();
                    break;

            case 5: exit(0);

            default : printf("\nInvalid Choice!!");
                      break;      
        }
    }
    return 0;
}