#include <stdio.h>
#include<stdlib.h>

#define sum 5
 //O(n^2)

void findpair(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int b=sum-arr[i];
        //check b
        for(int j=0;j<n;j++)
        {
        if(arr[j]==b)
            printf("pair:%d,%d\t",arr[i],b);
    }
}
}
//binarysearch
int bs(int *arr,int l_index,int r_index,int target)
{
    int m;
    while(l_index<=r_index)
    {
    m=l_index+(r_index-l_index)/2;
    if(l_index>r_index)
        return 0;
    if(arr[m]==target)
        return m;
    if(arr[m]<target)
        l_index=m+1;
    else
        r_index=m-1;
    }
return -1;
}




//cmp function
int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int main(int argc, const char * argv[]) {
    int arr[]={2,5,0,7,6,4,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
  //findpair(arr,n);


//O(nlogn)
qsort(arr,n,sizeof(int),cmpfunc);
    
for(int k=0;k<n;k++)
{
    int b=sum-arr[k];
    if(bs(arr,0,n-1,b)>0)
//if(boolean_expression)************************************

    {
 //   printf("pair:%d,%d",arr[k],arr[bs(arr,0,n-1,b)]);
    }
    
    }


//optimal=O(n) using hash table n*O(1)=O(n)

    //find largest element
    int max=arr[0];
    for(int k=0;k<n;k++)
    {if(arr[k]>max)
    max=arr[k];
    }
//printf("max=%d",max);    
int hash[7]={-1};
for(int k=0;k<max;k++)
{
for(int temp=0;temp<max;temp++)
{
    if(arr[temp]==k)
    {
    hash[k]=1;
    }
}
}
for(int k=0;k<max;k++)
{
   // printf("%d",hash[k]);
}
    for(int k=0;k<n;k++){
    int a=sum - arr[k];
        if(a>=0)
        {
        if(hash[a]==1)
            printf("Pairs:%d,%d",arr[k],a);
        }
        }


return 0;
}




