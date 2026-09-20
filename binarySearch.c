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

    //sorting a array :

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorted the array : \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    //Binary Search :

    int low=0;
    int high=size-1;
    int found=-1;
    int target;
    printf("Enter the target element :");
    scanf("%d",&target);

    while(low<=high){
        int mid= low + (high-low)/2;

        if(arr[mid]==target){
            found=mid;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found !=-1){
        printf("Element found at index %d ",found);
    }
    else{
        printf("Element not found");
    }

}