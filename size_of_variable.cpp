//find Type of variable without debugging or seeing variable declaration
#include<iostream>
using namespace std;
int main()
{
    int a=10, N;
    N=sizeof(a);
    //here in my machine the size of both the int and float is same 4 bytes
    cout<<"size of variable is "<<N;

}