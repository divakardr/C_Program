#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the input for LCM :");
    scanf("%d %d",&a , &b);
    int lcm ;
    if(a>b){
        lcm=a;
    }
    else{
        lcm=b;
    }
    while (1)
    {
        if(lcm%a==0 && lcm%b==0){
            break;
        }
        lcm++;
    }
    printf("The LCM of %d and %d is : %d  ",a,b,lcm );
    return 0 ;
}