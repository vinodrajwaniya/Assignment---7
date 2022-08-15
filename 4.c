#include<stdio.h>
int main()
{
    int a,b,i,min,hcf=1;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("HCF is %d",hcf);
    return 0;
    

}