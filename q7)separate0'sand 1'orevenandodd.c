//  main.c
//  q7)separateO'sand1's usingvarious approach
#include <stdio.h>


void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(int argc, const char * argv[]) {
    int arr[]={0,0,1,0,0,1,1,0,1,1,0,1,0,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //approach1:using counting sort
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count++;
    }
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    //approach2:Using Partition algo(used in Quick sort)
   
    for(int i=0,j=n;j<i;i++,j--)
    //copy 0's to left of array and 1's to the right of array
        if(arr[i]!=arr[j]&&arr[i]==1)
        {
            swap(arr[i],arr[j]);
        }
    for(int i=0;i<n;i++)
    {
        printf("\nv=%d\t",arr[i]);
    }
    
    //Bit modify:Separate all the even number and odd number
    //1.check even no. and odd no.
   //2.JUST CONVERT ARRAY OF EVEN NUMBER IN 1'S AND 0'S AND APPLY SAME APPROACH2
    int ar[]={2,23,44,51,66,88,19,10};
    int s=sizeof(ar)/sizeof(ar[0]);
    int ar1[8]={0};
    for(int i=0;i<s;i++)
    {
        ar1[i]=ar[i]%2;
    }
    for(int i=0;i<s;i++)
    {
        printf("\nnew=%d\t",ar1[i]);
    }
    return 0;
}
