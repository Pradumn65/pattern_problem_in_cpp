// ABCDCBA
// ABC CBA
// AB   BA
// A     A

#include<iostream>
using namespace std;
  
int main()
{

    for(int i=1;i<=4; i++)
    { 
        char ch='A';
       for(int j=1;j<=7;j++)
        {
          if(j<=4+1-i)
           {  
            
            ch='A'-1+j;
            cout<<ch;
            if(j==4)
            {
                ch='D'-1;
            }
            
         }
        else if(j>=3+i)
         {
            
            cout<<ch;
            ch='C'+ 4-j;
         }
        else{
            cout<<" ";
         }     

    }
    cout<<endl;
    }
    return 0;
}