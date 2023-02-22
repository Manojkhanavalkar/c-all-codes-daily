#include<iostream>
using namespace std;
int main()
{
    int i,n=1,j,rows;
    cout<<"\nEnter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<n<<"\t";
            n++;
        }
        cout<<"\n";
    }

}