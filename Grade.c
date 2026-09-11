#include <stdio.h>
int main(){
    char grade;
    printf("Enter the Grade : ");
    scanf("%c",&grade);
    if(grade=='A'){
        printf("Excellent");
    }
    else if(grade=='B'){
        printf("Good");
    }
    else if(grade=='C'){
        printf("Average");
    }
    else{
        printf("Worng Grade");
    }
}