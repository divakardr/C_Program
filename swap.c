#include <stdio.h>

void swap(int *a ,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    // printf("After swap a = %d b = %d\n",a,b);
}

int main(){
    int a =5;
    int b=8;

    printf("Before swap a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d b = %d",a,b);
}