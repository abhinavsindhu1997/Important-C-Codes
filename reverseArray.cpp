#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int l=0,r=4,temp;
    cin>>l;
    while(l<r)
    {
       temp=A[l];
       A[l]=A[r];
       A[r]=temp;
       l++;r--;
    }
    cout<<"l="<<l;
   return 0;
}