#include <stdio.h>
int main(){

    int size,i;
    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array value :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the target element :");
    scanf("%d",&target);

    int found=-1;
    
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("Element is found at index %d ",found);
    }
    else{
        printf("Element not found");
    }
}