#include <stdio.h>
int main(){
    printf("Enter the age :");
    int age;
    scanf("%d", &age);
    if((age>=12 && age<=18 )|| age==12 || age==13 || age==14 || age==15 || age==16 || age ==17 || age==18 ){
        printf("Teenager");
    }
    else{
        printf("No");
    }
    return 0;
}