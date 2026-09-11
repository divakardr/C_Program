#include <stdio.h>
#include <stdlib.h>
void search(int arr[]){
    int key;
    int found=0;
    printf("Enter the key :");
    scanf("%d",&key);
    
    
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
        else{
            found=0;
        }
    }
    if(found==1){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }

}

int main(){
    int arr[5];
    printf("Enthe the input :");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    search(arr);

}