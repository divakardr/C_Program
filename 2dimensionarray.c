#include <stdio.h>
void main(){
    int arr[3][3];
    int arr2[3][3];
    printf("Enter the value of array :");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Changing to Transpose array :");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]=arr[j][i];
        }
    }

    printf("The sum of two array is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two array is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",arr[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}
