#include<iostream>
using namespace std;
int main()
{
 int A[10],n=5;
    cout<<"Enter 5 elements: ";
    for(int i=0;i<n;i++)
    {cin>>A[i];}
    int maxi = 0;
    for (int i = 0; i < n - 1; i++) {
        int cnt = 1, j;
        for (j = i; j < n - 1; j++) {
            if (A[j + 1] == A[j] + 1)
            {cnt++;}
            else
                {break;}}
        maxi = max(maxi, cnt);
        i = j;}
    cout << "Length of longest contiguous subarray :" << maxi;
    return 0;
}
