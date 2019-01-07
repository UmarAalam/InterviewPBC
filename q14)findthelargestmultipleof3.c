//  q14)find the largest mutiple of 3 using various data structure
//  Created by Anonymous on 27/12/18.
//  Copyright © 2018 Umar_theCoder. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

    int main(int argc, const char * argv[]) {
    int arr[]={203,339,345,123,001,4,12,999999,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    int b[20]={0};
    int res[9]={0};
    int i,j,k,c=0,sum=0,max=res[0];
    for(i=0,j=0;(void)(i<20),j<20;i++)
    {
    res[i]=arr[i];
    while(arr[i])
    {
        b[j]=arr[i]%10;
        j++;
        c++;
      // printf("%d\t",b[j]);
        arr[i]/=10;
    }
    if(c==0)
    {
        printf("Maxm value=%d",max);
        
        return 0;
    }
        printf("c=%d\t",c);
        for(k=c-1;k>=0&&c>0;k--)
        {
          printf("%d\t",b[k]);
            //check whether sum of digits divisible by 3
            sum=sum+b[k];
        }
        if(sum%3==0)
        {
           printf("y=%d\t",res[i]);
            if(max<res[i])
            {
                max=res[i];
            }
        }
        for(int k=c-1;k>=0;k--)
        {
            b[k]=0;
        }
        sum=0;
        c=0;
        j=0;
        printf("\n");
    }
    return 0;
}
