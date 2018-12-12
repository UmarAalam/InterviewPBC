//q6)find the number occuring odd no. of times in an array given that exactly 1 numberoccurs odd no. of times
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c;
    
    int a[]={3,2,1,2,3,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    int flag;
    for(int i=0;i<n;i++)
    {
        flag=0;
        c=1;

        //check whether that element occured earlier or not.
        
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {flag=1;
            c=0;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if((a[i]==a[j])&&(flag==0))
                c++;
        }
        
        if(c%2!=0)
        {
 //       printf("e=%d",a[i]);
        }
    
    }
    
    //method2.Using Hash table O(n)
//1.find unique element present in the array
    int u=0;;
    int count[6];
    int f=0;
    int key[6]={0};
    int value[6]={0};
    for(int k=0;k<n;k++)
    {
    for(int l=0;l<k;l++)
        {
        if(a[k]==a[l])
        {
            f=1;
        }
        }
        //2.store key value pair
        
        if(f==0)
        {
        key[k]=a[k];
//        printf("%d\t",a[k]);
        u++;
        }
        
        }
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<u;i++)
    {
        if(a[j]==key[i])
            value[i]++;
    }
    }
    for(int i=0;i<u;i++)
    {
        printf("%d\t",value[i]);
    }
    printf("u=%d",u);
    //3.check odd no. of occurence from value array
    
    for(int i=0;i<n;i++)
    {
        if(value[i]%2!=0)
        printf("Occured no. odd no. of times=%d\n",value[i]);
    }
    //method 3 using Ex-OR function
    //Ex-or operator a^b
    //property=> a^a=0,a^a^a=a
    for(int i=0;i<n;i++)
    {
       a[i]=a[i]^a[i+1];
    }
    printf("odd no. of times occured element using ex-or operator=%d",a[n-1]);
return 0;
}
