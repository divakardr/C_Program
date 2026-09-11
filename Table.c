#include <stdio.h>
int main(){
    printf("Enter the table Number :");
    int n;
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",i,n,i*n);
    }
}