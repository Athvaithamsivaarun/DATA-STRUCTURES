#include<iostream>
using namespace std;
class employee
{
public:
    int salary;
    string name;
};
int main()
{
    int n;
    cout<<"enter the no of employee :";
    cin>>n;
    employee e[10];
    for(int i=0;i<n;i++)
    {cout<<"enter the name of the employee :";
        cin>>e[i].name;
        cout<<"enter the salary of the employee";
        cin>>e[i].salary;}
    for(int i=0;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
        {if (e[i].salary>e[j].salary)
            {swap(e[i].salary,e[j].salary);}}}
    for(int i=0;i<n;i++)
    {cout<<e[i].salary<<" ";}
}
