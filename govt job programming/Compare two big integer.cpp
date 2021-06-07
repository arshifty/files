#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    char a[100],b[100];
    while(scanf("%s %s",a,b)!=EOF)
    {
        if(strcmp(a,b)==0)
        {
            printf("%d , a==b\n",strcmp(a,b));
        }
        if(strcmp(a,b)>0)
        {
            printf("%d , a>b\n",strcmp(a,b));
        }
        if(strcmp(a,b)<0)
        {
            printf("%d , a<b\n",strcmp(a,b));
        }
    }
    return 0;
}
