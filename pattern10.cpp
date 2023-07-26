// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i+1-j;
        }
        cout<<endl;
    }
    return 0;
}