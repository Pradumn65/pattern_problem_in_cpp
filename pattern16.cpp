//            1
//          1 2 1
//        1 2 3 2 1
//      1 2 3 4 3 2 1
//    1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;
  
int main()
{  
    int n;
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
          cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=1;k<i;k++)
        {
            cout<<i-k;
        }
        cout<<endl;
    }
    return 0;
}