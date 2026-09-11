#include <stdio.h>
int main(){
    int choise;
    int balance,amount;
    printf("Enter the Balance :");
    scanf("%d",&balance);
    do{ 
        
    printf("1.Check Balance \n");
    printf("2.Deposit Money \n");
    printf("3.Withdraw Money \n");
    printf("4.Exit \n");
    
    printf("Enter the choise :");
    scanf("%d",&choise);
    

    switch (choise)
    {
    case 1:
        printf("Balance %d \n", balance);
        break;
    
    case 2:
        printf("Enter the amount to deposit :");
        scanf("%d",&amount);
        balance=balance+amount;
        printf("Balance %d \n",balance);
        break;

    case 3:
        printf("Enter the Withdraw amount :");
        scanf("%d",&amount);
        if(amount<=balance){
            balance=balance-amount;
            printf("Balance %d \n",balance);
        }
        else{
            printf("Insufficient balance \n");
        }
        break;

        case 4:
            printf("Exit \n");
            break;

    default:
        printf("Invalid Choise \n");
        break;
    }
    }while(choise!=4);
    return 0;

}