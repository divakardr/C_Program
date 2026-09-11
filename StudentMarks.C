#include <stdio.h>

int HighestMark(int mark[]){
    int max=mark[0];
    for(int i=0;i<5;i++){
        if(mark[i]>max)
        max=mark[i];
    }
    return max;
}

int main(){
    int mark[5];

    printf("Enter the array :");
    for(int i=0;i<5;i++){
        scanf("%d",&mark[i]);
    }
    printf("Highest mark is %d ",HighestMark(mark)) ;

    return 0;
}










