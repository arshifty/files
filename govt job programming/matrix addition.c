#include<stdio.h>
int matrix(int a[][2],int b[][2]);

int main()
{
    system("color 2D");
    int i,j,m;
    int a[2][2];
    int b[2][2];
     printf("MATRIX 'A'\t\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            scanf("%d",&a[i][j]);
        }

    }
    printf("\n");
         printf("MATRIX 'B'\t\n");

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            scanf("%d",&b[i][j]);
        }

    }
    matrix(a,b);
}
int matrix(int a[][2],int b[][2])
{
    int i,j,k,sum;
    printf("MATRIX 'A'\t\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

     printf("MATRIX 'B'\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX ADDITION\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
         {

            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
         }
         printf("\n");
    }


}
