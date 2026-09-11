#include <stdio.h>

void SecondLargest(int arr[],int size){
    int first_max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>first_max){
            first_max=arr[i];
        }
    }
    int second_max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>second_max && arr[i]<first_max){
            second_max=arr[i];
        }
    }
    printf("The second Largest Number is : %d",second_max);
}

int main(){
    int arr[5];
    int size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    printf("Enter the input : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    SecondLargest(arr,size);
    return 0;
}
