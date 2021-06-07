///linear search

#include<stdio.h>
int main()
{
    int K,N,ITEM,loc,LOC;
    int DATA[100];
    printf("enter the value of N :");
    scanf("%d",&N);
    for(K=1;K<=N;K++)
    {
        scanf("%d",&DATA[K]);
    }
    printf("enter ITEM :");
    scanf("%d",&ITEM);
    LOC=0;
    for(K=1;K<=N;K++)
    {
        if(DATA[K]==ITEM)
           {
                LOC=1;
                loc=K;

           }

    }
    if(LOC==0)
    {
        printf("\nITEM is not in the array DATA");

    }
    else
         printf("\n%d is the location of ITEM :%d",loc,ITEM);
}
