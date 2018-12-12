//q5)find maximum diff between 2 elements in an array such that larger elements appears after the smaller number
//O(n^2)
#include <stdio.h>
#include<stdlib.h>
int findmax(int *a,int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
int fun(int *diff,int *c,int n2,int i,int j);//declaration fun
int main(int argc, const char * argv[]) {
    int arr[]={4,3,10,2,9,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int curr_max=0,a=0,b=0;
    for(int i=0;i<n;i++)
    {
        a=arr[i];
        b=arr[i+1];
        if(b>a)
        {
            int t=abs(a-b);
            if(t>curr_max)
                curr_max=t;
        }
    }
  //  printf("Maximum Diff=%d",curr_max);
    //Approach2:O(n)
    int arr2[]={3,1,4,7,5,100,10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    //calc. diff array
    int diff[6];
    //calculate diff between adjacent element
    for(int i=0;i<n2;i++)
    {
    diff[i]=arr2[i+1]-arr2[i];
    }
    //calc. maxm subarray sum
    int s=0;
    int t=0;
    int c[6]={0};
    int i=0,j=0,l=0;
    /*
    for(l=0;l<6;l++)
    {
        for(i=l,j=l;i<n2&&j<n2;i++,j++)
        {
            c[t]=diff[t];
            c[j+1]=c[j]+diff[i+1];
        }
        int max=findmax(c,6);
        for(int i=0;i<6;i++)
        {
            printf("%d\n",c[i]);
        }
      //  printf("Max=%d\t%d\t%d\t",max,i,j);
        }
    */
    int d[6][6]={0};
    for(int i=0;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            if(j==i)
            {
            d[i][i]=diff[i];
            }
            d[i][j+1]=d[i][j]+diff[j+1];
        }
        for(int k=0;k<6;k++)
        {
            if(i>k)
            {
                d[i][k]=0;
            }
        }
    }
    
    //find maximum value in 2D array
    int max=d[0][0];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(d[i][j]>max)
                max=d[i][j];
            
            }
        }
    printf("Maximum value in a 2D array:%d\n",max);
    
    //print
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
     printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    //method3 to generate subarray
    
    int e[6][6]={0};
    for(int i=0;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            if(j==i)
            {
                d[i][i]=diff[i];
            }
            d[i][j+1]=d[i][j]+diff[j+1];
        }
        for(int k=0;k<6;k++)
        {
            if(i>k)
            {
                d[i][k]=0;
            }
        }
    }
    
    
    
    
    
    
    
    
    
     return 0;
}
