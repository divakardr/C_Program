#include <stdio.h>
int main(){
    int choice;
    while(1){
        printf("\n##### Choise #####\n");
        printf("1. Check Prime Number\n");
        printf("2. Fibonacci Series\n");
        printf("3. Check Palindrome\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
switch(choice){

    case 1:
    int num;
    int count=0;
    printf("Enter the number to check prime number :");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
        
    }
    if(count==2){
        printf("Its Prime number.\n");
    }
    else{
        printf("Its not a Prime number.\n");
    }
    break;


        //fibonacci series
    case 2:
    int n;
    printf("Enter the fibonacci number : \n");
    scanf("%d",&n);
    int a,b,c;
    a=0;
    b=1;
    printf("Fibonacci series is : ");
    for(int i=1;i<=n;i++){
        printf("%d", a);
        c=a+b;
        a=b;
        b=c;
        
    }
    printf("\n");
    break;


    //palindrome
    case 3:
    int num2;
    printf("Enter the number to check palindrome :\n");
    scanf("%d", &num2);
    int original=num2;
    int rev=0;
    while(num2 !=0){
        int rem= num2%10;
        rev = rev*10+rem;
        num2 = num2/10;
    }
    if(original==rev){
        printf("Its palindrome.\n");
    }
    else{
        printf("Its not a palindrome.\n");
    }
    break;

    case 4:
    printf("Program exited. \n");
    return 0;

    default:
    printf("Invalid choise ! please enter 1 to 4.\n");

}
    }

    return 0;
}