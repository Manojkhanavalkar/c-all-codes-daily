#include<iostream>
using namespace std;
int main()
{
    int i,j=0,temp,num,rem;
    char hexa[50];
    cout<<"\nEnter the decimal number:";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%16;
        if(rem<10)
            hexa[j++]=48+rem;
        else
            hexa[j++]=55+rem;
        temp=temp/16;
    }
    for(i=j-1;i>=0;i--)
    {
        cout<<hexa[i];
    }
}