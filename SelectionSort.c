#include <stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array value : \n");
    for(int i=0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //sorting :

    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    printf("After sorted : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}