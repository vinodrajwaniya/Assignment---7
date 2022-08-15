#include<stdio.h>
int main()
{
    int a,b,i,n,flag=0,min,max;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    max=a>b?a:b;
    for(n=min;n<=max;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
        flag=1;
        }
        if(flag==0)
        printf("%d ",n);
    }
    return 0;
}