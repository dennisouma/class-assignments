//program to grade students marks 
#include<iostream>
using namespace std;

int main()
{
    int geography,physics,maths, history, biology,avg;
    
    cout<<"enter marks for five subjects";
    cin>>geography>>physics>>maths>>history>>biology;
    avg=(geography+physics+maths+history+biology)/5;
    
    if(avg>=70 & avg<=100){
    cout<<"A";
    }
    else if(avg>=60 & avg<=69){
    cout<<"B";
    }
    else if(avg>=50 & avg<=59){
    cout<<"C";
    }
    else if(avg>=40 & avg<=49){
    cout<<"D";
    }
    else if(avg<40){
    cout<<"E";
    }
    else{
    cout<<"INVALID MARKS";
    }
    return 0;
}