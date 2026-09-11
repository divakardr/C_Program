#include <stdio.h>

int countCharacters(FILE *fp){
    int count =0;
    char ch;

    while((ch=fgetc(fp))!=EOF){
        count++;
    }
    return count;
}

int main(){
    FILE *fp;
    int total;
    fp=fopen("text.txt","r");

    if(fp==NULL ){
        printf("File cannot be opened");
        return 1;
    }
    total=countCharacters(fp);
    fclose(fp);
    printf("Total number of character =%d",total);
    return 0;
}