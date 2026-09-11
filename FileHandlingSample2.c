#include <stdio.h>
int main (){
    FILE *fp;
    fp=fopen("sample.txt","w");
    fputc('P',fp);
    fputs(" Janani Divakar",fp);
    fclose(fp);
}