#include <stdio.h>
int main(){
    FILE *fp;
    char c;
    char s[20];
    
    fp=fopen("text.txt","r");

    c=fgetc(fp);
    printf("%c \n", c);

    c=fgetc(fp);
    printf("%c \n", c);
    
    c=fgetc(fp);
    printf("%c \n", c);

    fgets(s,15,fp);
    printf("%s",s);

    fclose(fp)
}