#include<iostream>
using namespace std;
int main()
{
    float cpp,ds,dt,dbms,python,total;
    float avg;
    cout << "\nEnter marks of cpp:";
    cin >>cpp;
    cout << "\nEnter the marks of ds";
    cin >> ds;
    cout << "\nEnter the marks of dbms";
    cin>>dbms;
    cout << "\nENter the marks of dt";
    cin >> dt;
    cout << "\nEnter the marks of python";
    cin >> python;
    total=(cpp+ds+dt+dbms+python);
    cout <<"\n total:" <<total;
    avg=total/5;
    cout<<"\naverage:"<<avg; 
}