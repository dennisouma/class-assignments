#include<iostream>
using namespace std;

int main() 
{
         float salary;
         float bonus=-1;
         int yearsofservice;
         cout<<"enter salary";
         cin>>salary;
         cout<<"enter the number of years of service";
         cin>>yearsofservice;
        
        if(yearsofservice>10){
         bonus=0.1*salary;
        }
        else if(yearsofservice>=6 & yearsofservice<=10){
          bonus=0.08*salary;
        }
        else{
         bonus=0.5*salary;
        }
        
        if(bonus>0 & salary>0){
          cout<<"The bonus:"<<bonus<<"\n\n";
        }
        else{
            cout<<"INVALID DATA\n\n";
        }
        
        system ("pause");
    
    return 0;
}