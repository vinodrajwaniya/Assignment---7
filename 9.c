#include<stdio.h>
int main()
{
    int i,sum,x,n,count=0;
    for(i=1;i<=1000;i++)
    {
        sum=0;
        n=i;
        while (n!=0)
        {
            x=n%10;
            sum=sum+(x*x*x);
            n=n/10;
        }
        if(i==sum)
            printf("%d \n",i);
    }
    return 0;
}