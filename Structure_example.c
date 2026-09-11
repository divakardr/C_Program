#include <stdio.h>
#include <string.h>
struct Laptop
{
    char model[20];
    int price;
    float GST;
};

int main(){
    struct Laptop Lenova;
    struct Laptop HP;

   strcpy(Lenova.model,"LOQ");
    Lenova.price=55000;
    Lenova.GST=25.567;


    strcpy(HP.model,"Victus");
    HP.price=65000;
    HP.GST=27.567;

    printf("%s \n",Lenova.model);
    printf("%d \n",Lenova.price);
    printf("%f \n",Lenova.GST);

    printf("%s \n",HP.model);
    printf("%d \n",HP.price);
    printf("%f \n",HP.GST);
    
    
}