#include<iostream>
using namespace std;
class class1
{public:
    int grade;
    string name;
};
int main()
{
    int n;
    cout<<"enter the no of student :";
    cin>>n;
    class1 s[10];
    for(int i=0;i<n;i++)
    {cout<<"enter the name of the student :";
        cin>>s[i].name;
        cout<<"enter the grade of the student";
        cin>>s[i].grade;}
    for(int i=0;i<n-1;i++)
    {int min3=i;
        for(int j=i+1;j<n;j++)
        {if (s[j].grade>s[min3].grade)
            {min3=j;}
            swap(s[j].grade,s[min3].grade);}}
    for(int i=0;i<n;i++)
    {cout<<s[i].grade<<" ";}
}
