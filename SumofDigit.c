#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the input :");
    scanf("%d",&n);
    
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    printf("The sum od digit is %d",sum);
}