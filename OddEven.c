#include <stdio.h>

void oddeven(int arr[]){
    int odd=0;
    int even=0;
    for(int i=0;i<5;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
    printf("The count of even is %d \n",even);
    printf("The count of odd is %d ",odd);
}

int main(){
    int arr[5];
    printf("Enter the input :");
    for(int i=0;i<5;i++){
    scanf("%d" ,&arr[i]);
    }
    oddeven(arr);
    return 0;
}