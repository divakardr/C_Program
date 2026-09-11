#include <stdio.h>

void SmallestNumber(int arr[]){
    int small=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The smallest number is : %d",small);
}

int main(){
    int arr[5];
    printf("Enter the input :");
    for(int i=0;i<5;i++){
    scanf("%d", &arr[i]);
    }
    SmallestNumber(arr);
}