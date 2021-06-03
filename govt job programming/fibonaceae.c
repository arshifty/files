#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("\n\nENTER NUMBER FOR FINDING IT'S FIBONACEAE NUMBER  :");
    scanf("%d",&n);
    printf("\n\nFIBONACEAE NUMBERS ARE   :");
    for(i=0; i<n; i++)
    {
        c=a+b;
        printf(" %d",a);
        a=b;
        b=c;
    }
}
