#include <stdio.h>

void CircularShift(int arr[],int size,int shift){
    for(int s=0;s<shift;s++){
        int last=arr[size-1];
        for(int i=size-1;i>0;i--){
            arr[i]=arr[i-1];
        }
            arr[0]=last;
    }
}

int main(){
    int arr[10];
    int size;
    int shift;
    printf("Enter the array size :");
    scanf("%d",&size);
    printf("Enter the array :");
    for(int i=0;i<size;i++){
        scanf("%d",& arr[i]);
    }
    printf("Enter the round of shift :");
    scanf("%d",&shift);

    CircularShift(arr,size,shift);
    printf("After the Circular Shift \n");

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}