//  A B C D
//  A B C D
//  A B C D
//  A B C D
 
 #include<iostream>
 using namespace std;
   
 int main()
 {  
     int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
         
        for(int j=1;j<=n;j++)
        { 
           char ch='A'-1+j;
           cout<<ch;
        }
         

        cout<<endl;
    }
    
    return 0;
 }