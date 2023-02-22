#include<iostream>
using namespace std;
int main()
{
    char choice;int ans,a,b;
    cout<<"\nEnter the value of a and b: ";
    cin>>a>>b;
    cout<<"\nEnter your choice +,-,*,/:";
    cin>>choice;
    switch (choice)
    {
        case '+':ans=a+b;
                 cout<<"\nAnswer:"<<ans;
                 break;
        case '-':ans=a-b;
                 cout<<"\nAnswer:"<<ans;
                 break;
        case '*':ans=a*b;
                 cout<<"\nAnswer:"<<ans;
                 break;
        case '/':ans=a/b;
                 cout<<"\nAnswer:"<<ans;
                 break;
    }
}