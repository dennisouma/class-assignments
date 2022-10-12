//program to change fahrenheit to celcius scale
#include<iostream>
using namespace std;

int main()

{
    float f,c;
    cout<<"enter temperature in Fahrenheit";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"the temperature in Celsius is"<<c;
    return 0;
    
}