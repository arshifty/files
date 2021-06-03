#include<stdio.h>
int main()
{
    int i, a,chack;
    chack=1;
    printf("enter a value of a\n");
    scanf("%d",&a);
    for(i=2; i<a; i++)
    {
        if(a%i==0)
            chack=0;
    }
    if(chack==1)
        printf("prime");
    else
        printf("not prime");

}
