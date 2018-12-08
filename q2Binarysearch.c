#include <stdio.h>
#include<stdlib.h>

int bs(int *arr,int lindex,int rindex,int target)
{
    int m;
    if(lindex>rindex)
        return 0;
while(lindex<=rindex)
{
    m=lindex+(rindex-lindex)/2;
 //   printf("m=%d",m);
    if(arr[m]==target)
    {
   //      printf("%d",m);
        return m;
       
    }
    if(arr[m]<target)
    {
        lindex=m+1;
     //   printf("inside>");
    }
else
    rindex=m-1;
    //printf("inside<");

}
    return -1;
}

int main(int argc, const char * argv[]) {

    int arr[]={2,3,4,5,6,12,14};
    int target=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int left=0;
    int right=size-1;
    printf("%d",bs(arr,left,right,target));
    

    return 0;
}
