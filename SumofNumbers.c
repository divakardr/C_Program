#include <stdio.h>
int main(){
    printf("Enter the N value :");
    int n;
    int sum=0;
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of N number is : %d",sum);
}

