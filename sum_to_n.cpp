//Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,temp_sum,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        temp_sum=0;
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
            temp_sum=temp_sum+j;
            cout<<j;
            if(j<i)
            {
                cout<<"+";
            }
        }
        cout<<"="<<temp_sum<<"\n";
    }
    cout<<"\ntotal value ="<<sum;
}