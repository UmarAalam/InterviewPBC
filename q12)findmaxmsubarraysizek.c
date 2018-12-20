//  q12)given an array and an integer k . find the maxm for each and every contiguos sub array of size k
//Approach1: here total no. of partition is n-k+1 and every partition takes O(k) time

//result of which it becomes O(nk) S.C=O(K)


#include <stdio.h>

void findmax(int arr[],int i,int n,int k)
{
 int  max=arr[i];
    for(int p=i+1;(p<(k+i))&&(p<n);p++)
    {
        if(max<arr[p])
        {
            max=arr[p];
        }
        
    }
    printf("%d\t",max);
}
int main(int argc, const char * argv[]) {
    int arr[]={10,4,2,11,3,15,12,8,7,9,21,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int i;
    
    for(i=0;i<n;i++)
    {
    findmax(arr,i,n,k);
    }
        return 0;
}
