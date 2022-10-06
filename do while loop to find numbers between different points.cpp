#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"enter starting point";
    cin>>n1;
    cout<<"enter stoping point";
    cin>>n2;
    //do while loop to find numbers between different points 
     do{
   cout<<n1<<"";
      ++n1;

    }
    while(n1<=n2);
    return 0;
}