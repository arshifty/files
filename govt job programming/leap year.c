#include<stdio.h>
void main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if( ((year%4)==0) && ((year%100)!=0) || ((year%400)==0) )
    {

        printf("\n\athis is a leap year");
    }
    else
    {

        printf("\n\athis is not a leap year");
    }
}
