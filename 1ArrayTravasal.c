#include <stdio.h>
int main(){
    printf("Enter the size of array : ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array value : \n");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Entered array value is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}