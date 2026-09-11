#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a value of A :");
    scanf("%d", &a);
    printf("Enter a value of B :");
    scanf("%d", &b);
    printf("Enter a value of C :");
    scanf("%d", &c);
    int lcm;
    if(a>b){
        lcm=a;
    }
    else if (a>c)
    {
        lcm=a;
    }
    else if(b>a){
        lcm=b;
    }
    else if(b>c){
        lcm=b;
    }
    else{
        lcm=c;
    }
    while(1){
        if(lcm%a==0 && lcm%b==0 && lcm%c==0){
            break;
        }
        lcm++;
    }
    printf("The LCM of %d %d and %d is : %d  ",a,b,c,lcm );
    
}