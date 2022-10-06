#include<iostream>
using namespace std;

int main() 
{
         int i,n1,n2,sum=0;
        cout<<"enter a starting number";
        cin>>n1;
        cout<<"enter a stoping number";
        cin>>n2;
         for(i=n1;i<=n2;i++){
         cout<<i<<"";
        sum=sum+i;
        }
        cout<<"sum of  numbers between"<<n1<<"and"<<n2<<"is"<<sum;
        
    
    return 0;
}