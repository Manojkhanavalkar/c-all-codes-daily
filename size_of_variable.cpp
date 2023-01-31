//find Type of variable without debugging or seeing variable declaration
#include<iostream>
using namespace std;
int main()
{
    float a=10, N;
    N=sizeof(a);
    
    cout<<"sizeof float is "<<N;

}