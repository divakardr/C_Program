#include <stdio.h>
#include <math.h>
int main(){
    int n;
    
    int digit=0;
    int sum=0;
    printf("Enter the input :");
    scanf("%d",&n);
    int copy =n;
    while (copy>0){
        copy=copy/10;
        digit++;
    }
    copy=n;
    while(copy>0){
        sum=sum + pow((copy%10),digit);
        copy=copy/10; 
    }
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Aremstrong");
    }
}