//q11)given an array of size unknown will all 0's in the begining and 1's in the end. find the starting index of 1

//approach1,2:O(n),O(logn)

#include <stdio.h>
#include<math.h>
int i,c,t;
int j=0;
int l,r,m;
void bs(int *arr,int l,int r)
{
    //printf("%d\t%d",l,r);
    while(l<=r)
   {
       m=l+(r-l)/2;
       
      // printf("m=%d",m);
       if(arr[m]==1&&arr[m-1]!=1)
       {
        printf("index=%d",m);
       }
       if(arr[m]==0)
       {
           l=m+1;
       }
       else
           r=m-1;
   }
}
int fun(int *arr,int l,int n)
{
    for(i=0;(c=pow(2,i))<=n;i++)
    {
        if(arr[c-1]==1)
        {
       printf("holaindex=%d",c-1);
   //         return 0;
        }
        t=c;
    }
 //   printf("c=%d,%d",t,c);
    
    if(t<=n)
    {
    //apply bs from c to n to find the position of starting index of 1
        bs(arr,t,n);
    }
   // printf("%d\t%d",c,j);
    if(j<=n)
    {
      //  fun(arr,j/2,n);
    }
return 0;
}
int main(){
    //1.check at every 2^k indexed elements
    int arr[]={0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,0,n-1);
    return 0;
}
