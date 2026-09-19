#include <stdio.h>
int main(){
    int size,pos;
    int arr[10];
    printf("Enter the size :");
    scanf("%d",&size);
    printf("Enter the array value :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("From which position we want to delete :");
    scanf("%d",&pos);

    //Deletion :

    if(pos<0 || pos>size-1){
        printf("Invalid position");
    }
    else{
        for(int i=pos;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
        printf("After deleting an element : ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    
}