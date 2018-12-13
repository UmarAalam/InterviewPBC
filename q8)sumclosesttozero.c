
// q8)given an array A,find 2 elements whose sum is closest to zero
#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(int argc, const char * argv[]) {
   
    
    int arr[]={-5,-2,1,2,6,9};
    //here I have taken sorted array if unsorted use qsort(1,2,3,4) to sort it leads to O(nlogn)
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int curr_sum=0;
    int closest_sum=INT_MAX;
    int l=0;
    int r=n-1;
    int min_l=l;
    int min_r=r;
    
    while(l<r)
    {
        curr_sum=arr[l]+arr[r];
        if(abs(curr_sum)<abs(closest_sum))
        {
            closest_sum=curr_sum;
            min_l=l;
            min_r=r;
        }
        if(curr_sum<0)
        {
            l++;
        }
        else
            r--;
    }
    printf("elements %d,%d whose sum is %d (closest to zero)",arr[min_l],arr[min_r],closest_sum);
return 0;
}
