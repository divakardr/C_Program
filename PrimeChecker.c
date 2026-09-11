#include <stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Its Prime number");
    }
    else{
        printf("Its not a prime number");
    }
    return 0;
}