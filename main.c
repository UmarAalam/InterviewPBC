//q5)method2 O(n)
#include <stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {

    int a[]={4,3,10,2,9,1,6};
    int min_sofar=0;
    int max=0;
    int max1=0;
    int n=sizeof(a)/sizeof(a[0]);
    
    min_sofar=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min_sofar)
        min_sofar=a[i];
    
        
        //find_diff
        
        for(int j=0;j<i-1;j++)
        {
            max=abs(min_sofar-a[i]);
            if(max>max1)
            {  max1=max;
            
            printf("i=%d,j=%d,max %d",min_sofar,a[i],max1);
            }
            }
        
        
        
        
        
        
        
        }
    return 0;
}
