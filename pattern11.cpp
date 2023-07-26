// A A A A 
// B B B B
// C C C C
// D D D D

#include<iostream>
using namespace std;
  
int main()
{
     int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
         char ch='A'-1+i;
        for(int j=1;j<=n;j++)
        {
           cout<<ch;
        }
         

        cout<<endl;
    }
    return 0;
}