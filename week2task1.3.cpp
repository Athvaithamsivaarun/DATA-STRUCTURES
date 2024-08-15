#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,3,4,4,5,5},c;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++)
        {for(int k=j+1;k<n;k++)
            {if (arr[i]+arr[j]+arr[k]==8)
                {c++;}}}}
    cout<<"occurence:"<<c;
    return 0;
}
