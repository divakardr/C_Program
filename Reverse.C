#include <stdio.h>
    void reverse(int arr[]){
    
        for(int i=4;i>=0;i--){
        printf("%d ", arr[i]);
        }
        
    }
int main(){
    int arr[5];
    printf("Enter the input for array :");
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("The reversed array is : ");
    reverse(arr);
    return 0;

}