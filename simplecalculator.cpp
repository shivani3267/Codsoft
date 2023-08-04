#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<"\t\t\t\t************************************CALCULATOR************************************"<<endl;
    cout<<"\n\n";
    char operato;
    double num1,num2;
    int choice=1;
    do 
    {
        cout<<"Enter first operand:";
        cin>>num1;
        cout<<"\nEnter operator (*,-,*,/):";
        cin>>operato;
        cout<<"\nEnter second operand:";
        cin>>num2;
   
      if(operato=='+')
      cout<<"\n"<<num1<<"+"<<num2<<"="<<num1+num2<<endl;

      else if(operato=='-')
     cout<<"\n"<<num1<<"-"<<num2<<"="<<num1-num2<<endl;

     else if(operato=='*')
     cout<<"\n"<<num1<<"*"<<num2<<"="<<num1*num2<<endl;

     else if(operato=='/')
     {
        if(num2==0)
        cout<<"\nDivision by zero is not valid"<<endl;
        else
        cout<<"\n"<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
     }

     else
     cout<<"\nEnter valid operator"<<endl;

     cout<<"Do you want to perform calculation again?(enter 1 to continue)";
     cin>>choice;
    } while(choice==1);

    return 0;
}
