//)q4
//In a sorted array of size n,find an element that occurs more than n/2 times
//1.Approach 1 Using O(n)
#include <stdio.h>


int main(int argc, const char * argv[]) {

    int arr[]={1,2,3,4,4,4,4};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    //1.check every element's value mustbe equal at two position first and last
    //A[i]=A[i+n/2]
    
    //calc. atleast it should occur n/2+1 times
    
    
    for(int i=0;i<n;i++)
    {
    if(arr[i]==arr[i+n/2])
    printf("majorityelement=%d\n",arr[i]);
    }


//2.Approach2
//using count value to check whether it occurs more than n/2 times i.e atleast n/2 + 1 times
    int a[]={1,1,1,2,3,3,3,3,3,3,3,4,4};
    int count=0;
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    {
    if(a[i]==a[i+1])
    {count++;
     //   printf("%d\n",count);
    }else
    {   count=1;
       // printf("%d\n",count);
    }
        if(count==(s/2+1))
        {
            printf("majorityeee=%d",a[i]);
        }
        }
    return 0;
}
