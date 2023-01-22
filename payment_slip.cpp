#include<iostream>
using namespace std;
int main()
{
    int TA,DA,HRA,basic_salary,gross_salary,pf=400,pt=200,dedicted_amt;
    cout<<"\nEnter your basic salary:";
    cin>>basic_salary;
    TA=basic_salary*0.15;
    DA=basic_salary*0.70;
    HRA=basic_salary*0.20;
    gross_salary=TA+DA+HRA+basic_salary;
    dedicted_amt=pt+pf;
     int final_sal=(gross_salary-dedicted_amt);
     cout<<"================================================================";
     cout<<"\n\n              VJTECH SOFTWARE PVT LTD                       ";
     cout<<"\n--------------------------------------------------------------";
     cout<<"\n              PAY SLIP:JULY MONTH       DATE:14 JULY          ";
     cout<<"\n--------------------------------------------------------------";
     cout<<"\n\n Travelling allowance:"<<TA<<"\tProfessional tax:         "<<pt;
     cout<<"\n\n Day allowance:       "<<DA<<"\tProfessional fund:        "<<pf;
     cout<<"\n\n Home rent allowance: "<<HRA;
     cout<<"\n\n Basic salary:        "<<basic_salary;
     cout<<"\n==============================================================";
     cout<<"\nTotal salry:    "<<gross_salary<<"                           =";
     cout<<"\nCredited salary:"<<final_sal<<"                              =";
     cout<<"\n==============================================================";

}