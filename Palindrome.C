#include <stdio.h>
int main(){
    int n;
    printf("Enter the input :");
    scanf("%d",&n);
    int orginal=n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10 +digit;
        n/=10;
    }
    if(orginal==rev){
        printf("Its Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}