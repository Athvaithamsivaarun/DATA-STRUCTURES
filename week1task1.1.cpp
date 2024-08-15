#include<iostream>
using namespace std;
int main()
{
    int arr[10],n=5;
    cout<<"Enter the 5 elements: ";
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int un=1;
    for(int i=1;i<n;i++)
    { int j=0;
        for(j=0;j<i;j++)
            if(arr[i]==arr[j])
               break;
        if(i==j)
            un++; }
    cout<<"unique elements are "<<un;
    return 0;
}
