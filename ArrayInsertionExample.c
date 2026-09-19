#include <stdio.h>
int main(){
    int size,pos,num;
    int arr[10];

    printf("Enter the size :");
    scanf("%d",&size);

    printf("Enter the array :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    printf("Enter the postion to insert :");
    scanf("%d",&pos);

    

    //insertion

    if((pos<0) || (pos>size)){
        printf("Invalid position\n");
    }
    else{
        printf("Enter the new number to insert :");
        scanf("%d",&num);
        for(int i=size-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=num;
        size++;
        printf("After insertion on new element :");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    
}