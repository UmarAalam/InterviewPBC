//  q10)find the equilibrium index of the array
//equilibrium index =>index at which sum of all the elements is equal to the sum of rest of the array


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[]={10,5,15,3,4,21,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //Approach1:
    //1.take 2ptr and 2 sum var and balance the sum til l you get equilibrium
    int s1,s2,i=0,j=n-1;
    s1=arr[0];
    s2=arr[n-1];
    for(;i<n&&j<n;)
    {
    if(s1<s2&&i<n)
    {
         i++;
        s1=s1+arr[i];
        printf("s1=%d\t",s1);
    }
    else
    {
    j--;
    s2=s2+arr[j];
    printf("s2=%d\t",s2);
    }
        if(s1==s2)
        {
            printf("equi index=%d",i);
            return 0;
            
        }
    }
    
    
    //approach2:
    //1.at having the index i check the sum of all numbers till i and rest all elements sum is having equal or not
    //complexity = O(n^2) space complexity=O(1)
    
    
    int s3=0,s4=0;
    int k,l,m;
    for(k=0;k<n;k++)
    {
        for(m=0;m<=k;m++)
        {
        s3=s3+arr[m];
    //    printf("s3=%d\t",s3);
        }
       // printf("\n");
        for(l=k+1;l<=n;l++)
        {
            s4=s4+arr[l];
      //      printf("s4=%d\t",s4);
        }
        
        if(s3==s4)
        {
   //         printf("index=%d\t",k);
        }
        s3=0;
        s4=0;
    }
    
    //approach3:O(n)
    //space complexity=O(n)
    
    int l_sum[n];
    int r_sum[n];
    
    l_sum[0]=arr[0];
    r_sum[0]=arr[n-1];
    
    for(int q=1;q<n;q++)
    {
    l_sum[q]=l_sum[q-1]+arr[q];
    }
    
    for(int k=n-2,s=1;k>=0;k--,s++)
    {
        r_sum[s]=r_sum[s-1]+arr[k];
   //     printf("%d\t",r_sum[s]);
    }
    
    for(int p=0;p<n;p++)
{
    //    printf("%d\t",r_sum[p]);
}
    //check l_sum[i]==r_sum[i+1]
    for(int i=0;i<n;i++)
    {
    if(l_sum[i]==r_sum[i+1])
    {
  //  printf("Index Value=%d",i);
    }
    }
    
    
    
    
return 0;
}
