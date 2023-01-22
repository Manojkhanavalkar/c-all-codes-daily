/*write a c++ lang program to calculate the gross salry of
an employee where TA=15% DA=70% HRA=20% on basic salary.*/
#include<iostream>
using namespace std;
int main()
{
    int basic_salary,TA,DA,HRA,gross_salary;
    cout<<"\nEnter the basic salary of employee:";
    cin>>basic_salary;
    TA=basic_salary*0.15;
    DA=basic_salary*0.70;
    HRA=basic_salary*0.20;
    gross_salary=TA+DA+HRA+basic_salary;
    cout<<"\nGROSS SALARY:"<<gross_salary;
}