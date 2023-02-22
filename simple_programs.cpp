// #include<iostream>
// using namespace std;
// int main()
// {
//     //factorial of numbers
//     int fact=1,i,a;
//     cout<<"\nEnter the numbers";
//     cin>>a;
//     for(i=a;i>0;i--)
//     {
//         fact=fact*i;
//     }
//     cout<<"\nFactorial of number"<<fact;
//}
// #include<iostream>
// using namespace std;
// int main()
// {
    // x^y program
//     int x,y,i;
//     int ans=1;
//     cout<<"\nEnter the numbers x and y:";
//     cin>>x>>y;
//     for(i=1;i<=y;i++)
//     {
//         ans=ans*x;
//     }
//     cout<<"\nThe answer is "<<ans;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     /*pattern creation program
//     1
//     2 2
//     3 3 3*/
//     int i,j,n;
//     cout<<"\nEnter the number of rows you want to display:";
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<i<<"\t";
//         }
//         cout<<"\n";
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     /*pattern creation program
//     1
//     1 2
//     1 2 3*/
//     int i,j,n;
//     cout<<"\nEnter the number of rows you want to display:";
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<j<<"\t";
//         }
//         cout<<"\n";
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    /*pattern creation program
    1
    1 2
    1 2 3*/
    int i,j,n;
    cout<<"\nEnter the number of rows you want to display:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}