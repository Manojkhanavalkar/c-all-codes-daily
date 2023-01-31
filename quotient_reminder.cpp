//find quotient and reminder 
#include<iostream>
using namespace std;
int main()
{
    int divident,devisor,quotient,reminder;
    cout<<"\nEnter the divident:";
    cin>>divident;
    cout<<"\nEnter the divisor:";
    cin>>devisor;
    quotient=divident/devisor;
    reminder=divident%devisor;
    cout<<"\nYour quotient="<<quotient;
    cout<<"\nYour reminder="<<reminder;
}