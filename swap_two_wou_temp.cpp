//cpp program without using 3rd variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nInsert the values of a and b";
    cin>>a>>b;
    cout <<"\nvalues before swapping:";
    cout<<"\na="<<a<<"\tb="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nvalues after swapping:";
    cout<<"\na="<<a<<"\tb="<<b;
    
}