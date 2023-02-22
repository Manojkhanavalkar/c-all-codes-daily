#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row,count=1;
    cout<<"\nEnter the number of rows: ";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=row-1;j>=i;j--)
        {
            cout<<" ";
        }
       
        for(k=1;k<=i;k++)
        {
            cout<<count;
            count++;
            // cout<<"*";
        }
        cout<<"\n";
    }
}