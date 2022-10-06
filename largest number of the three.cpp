#include<iostream>
using namespace std;

int main() 
{
         float n1,n2,n3;
         cout<<"enter three numbers";
         cin>>n1>>n2>>n3;
        
        if((n1>=n2) & (n1>=n3))
         cout<<"the largest number is:"<<n1;
        
        else if((n2>=n1) & (n2>=n3))
          cout<<"the largest number is:"<<n2;
        
        else
         cout<<"the largest number is:"<<n3;
        
        
        
    
    return 0;
}