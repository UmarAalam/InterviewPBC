//
//  main.c
//  hackerearthq2)
//  Created by mr_easy on 07/01/19.
//  Copyright © 2019 Umar_theCoder. All rights reserved.
//program to solve colour housing problem so that no two adjacent buildings  having the same colour.

#include <stdio.h>
#include<math.h>

int fact(int n);
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    unsigned  int num,b,c,p=1;
    const unsigned int M = 1000000007;
    scanf("%d", &num);
    //constraints no.1
    if((num>=1)&&(num<=10))
    {
        for(int i=0;i<num;i++)
        {
            scanf("%d\t%d",&b,&c);
            
            //bulding condition and color condition
            //constr. 2,3
            if((b>=1&&b<=pow(10,5))&&(c>=2&&c<=pow(10,5)))
            {
                printf("\n");
                p=(p*ncr(c,1))%M;
                for(int j=0;j<b-1;j++)
                {
                    p=(p*ncr(c-1,1))%M;
                }
                printf("%d\n",p%M);
                p=1;
            }
            else
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 0;
}
