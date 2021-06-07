#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int i,j;
    printf("MATRIX A :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}
