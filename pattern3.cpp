// 1 1 1 1
// 2 2 2
// 3 3
// 4

#include<iostream>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int i=0;
    while (i<n)
    {
       int j=0;
       while(j<n-i){
        cout<<i+1;
        j++;
       }
       cout<<endl;
       i++;
    }
    
    return 0;
   
}