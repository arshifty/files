#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,o,p;
    cout<<"Enter A matrix rows and columns: "<<endl;
    cin>>m>>n;
    cout<<"Enter B matrix rows and columns: "<<endl;
    cin>>o>>p;
    int A[80][80],B[80][80];
    if(n!=o){
        cout<<"Can not multiple matrix!!!!!!!!"<<endl; return 0;
    }
    else
    {
        printf("Enter elements of A matrix:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter elements of B matrix:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                scanf("%d",&B[i][j]);
            }
        }
        printf("Matrix A :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("\t%d",A[i][j]);
            }
            cout<<endl;
        }

        printf("Matrix B :\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                printf("\t%d",B[i][j]);
            }
            cout<<endl;
        }
        int sum;
        int C[80][80];
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
               sum=0;
               for(int k=0;k<n;k++){
                sum+=A[i][k]*B[k][j];
               }
               C[i][j]=sum;
            }
        }
        printf("Matrix C :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                printf("\t%d",C[i][j]);
            }
            cout<<endl;
        }
    }
    return 0;

}
