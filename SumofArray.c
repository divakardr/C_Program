#include <stdio.h>

int sum(int arr[]){
    int tot=0;
    for(int i=0;i<10;i++){
        tot=tot+arr[i];
    }
    return tot;
}

int main(){
    int arr[10];
    printf("Enter the input : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("The sum of Array is %d " ,sum(arr));
    return 0;
}