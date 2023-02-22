#include<iostream>
using namespace std;
int a=10;
int main()
{
    int a=20;
    cout<<"\nvalue of variable"<<a;
    cout<<"\nvalue of variable global "<<::a;
}