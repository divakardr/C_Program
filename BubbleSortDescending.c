#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array value : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorted array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorting the array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}