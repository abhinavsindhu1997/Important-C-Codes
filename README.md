# Interview Coding Question CPP
Leetcode,GeeksForGeeks
Hello Abhinav 

# ReverseArray.CPP

https://leetcode.com/problems/integer-to-roman/

```
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
```
#Allocate Minimum Number Of Pages

https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

```
  bool isPossible(int arr[],int n,int m,int barrier)
    {
       int allocatedStudent=1,pages=0,i;
       for(i=0;i<n;i++)
       {
           if(arr[i]>barrier)
           {
               return false;
           }
           else if(arr[i]+pages>barrier)
           {
               allocatedStudent++;
               pages=arr[i];
           }
           else
           {
               pages=pages+arr[i];
           }
       }
       
       if(allocatedStudent>m)
       {
         return false;  
       }
       
       return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        if(m>n)
        {
            return -1;
        }
        else
        {
            
            int minPages=arr[0],i,sumPages=arr[0];
            
            for(i=1;i<n;i++)
            {
                minPages=min(minPages,arr[i]);
                sumPages=sumPages+arr[i];
            }
            
            int low,high,mid,res=-1;
            low=minPages;
            high=sumPages;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(isPossible(arr,n,m,mid))
                {
                    res=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
                
            }
            
            return res;
        }
    }
  
```
