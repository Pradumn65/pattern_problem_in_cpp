// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
           cout<<j;
        }
         for(int k=1;1<=i-k;k++)
        {
           cout<<"*";
        }
         for(int l=1;1<=i-l;l++)
        {
           cout<<"*";
        }
         for(int m=1;m<=n+1-i;m++)
        {
           cout<<n+2-i-m;
        }

        cout<<endl;

    }
    return 0;
}