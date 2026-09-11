#include <stdio.h>
#include <string.h>
int main(){
    char day[20];
    printf("Enter the day :");
    scanf("%s",&day);
    if(strcmp(day,"Saturday")==0 || strcmp(day,"Sunday")==0)
    {
        printf("Its a weekend.");
    }
    else
        {
        printf("Its Normal day.");
    }
    return 0;   
}