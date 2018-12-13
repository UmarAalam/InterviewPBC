// q9)findtripletin a given array that sum to given value as X
#include <stdio.h>
#include<stdlib.h>

//binary search
int bs(int *a,int n,int t,int k)
{
    int i=k;
    int j=n-1;
    while(i<=j)
    {
    int m=i+(j-i)/2;
    if(a[m]==t)
    return m;
    else
    //check where this target will lie left of m or right of m
    {
    if(t>a[m])
    {
    i=m+1;
    }
    else
    {
    j=m-1;
    }
}
    }
return 0;
}
int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,6,7,8,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=10;
    
    //approach1:O(n^3)
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
            if(arr[i]+arr[j]+arr[k]==target)
               printf("triplets are %d,%d,%d whose sum is %d\n",arr[i],arr[j],arr[k],target);
            }
        }
    }
    //approach2:Using Binary search + two nested loops =>O(n^2logn)
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        //find third element
            int t=target-(arr[i]+arr[j]);
            int res=bs(arr,n,t,j+1);
        if(res!=0)
        {
            printf("found element at index=%d\n",res);
        }
        }
    }
    return 0;
}
