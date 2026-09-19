#include <stdio.h>
int main(){
    int size,pos,num;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[10];
    printf("Enter the array value :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position for instering a number :");
    scanf("%d",&pos);
    printf("Enter the number to insert :");
    scanf("%d",&num);

    if(pos<0 || pos>size+1){
        printf("Invalid position");
    }
    else{
        for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
    }
    printf("After inserting an array is :");
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
}