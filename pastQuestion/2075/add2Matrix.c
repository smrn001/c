#include<stdio.h>
int main()
{
    int mat1[2][2],mat2[2][2],mats[2][2];
    printf("Enter elements of 1st matrix : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    //adding two matrics 

   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mats[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("Enter sum of two  matrixs are  : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",mats[i][j]);
        }
        printf("\n");
    }


return 0 ;
}