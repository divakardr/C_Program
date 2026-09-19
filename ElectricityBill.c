#include <stdio.h>
int main(){
    int units,bill;
    
    printf("Enter the unit :");
    scanf("%d",&units);

    if(units<=100){
        bill=units*2;
    }
    else{
        bill=((100*2)+(units-100 )*5);
    }
    printf("Total bill %d",bill);
}