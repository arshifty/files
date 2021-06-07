
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

long long BigMod(long long x,long long n,long long m)
{
    if(n==0)
        return 1;
    if(n%2==1)
    {
        long long part1=x%m;
         //printf("\npart 1 %lld",part1);
        long long part2=BigMod(x,n-1,m);
         //printf("\npart 2 %lld",part2);
        return (part1*part2)%m;
    }

    else if(n%2==0)
    {
        long long half=BigMod(x,n/2,m);
       // printf("\nhalf %lld",half);
        return (half*half)%m;
    }
}


int main()
{
long long int x,n,m,sum,mod;
while(scanf("%lld %lld %lld",&x,&n,&m)!=EOF)
{
printf("\n\nresult : %lld\n",BigMod(x,n,m));
}


    return 0;
}
