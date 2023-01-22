//write c++ program to swap two numbers 
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"\nEnter the value of a and b ";
    cin>>a>>b;
    cout<<"\nvalues before swapping:a="<<a;
    cout<<"\nvalues before swapping:b="<<b;

    temp=a;
    a=b;
    b=temp;
    cout << "\nvalues after swapping ";
    cout<<"\na="<<a<<"\tb="<<b;


}