//creating a Upper Triangular Matrix of a square matrix containing non zero diagonal elements
#include <stdio.h>
//For square matrix with non zero diagonal elements only
int main()
{
    int M[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,c;
    float constant;
    // for(i=0;i<3;i++)
    // {
    //     constant=M[i][i];
    //     for(j=0;j<3;j++)
    //     {
    //         M[i][j]=M[i][j]/constant;
    //     }
    // }
    for(i=0;i<3;i++){
        constant=M[i][c]/;
        c+=1;
        for(j=0;j<3;j++)
        {
            M[i][j]=M[i][j]-constant*M[1][j];
        }
    }
    printf("The matrix obtained is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
}