#include<stdio.h>
int main()
{
    int i,sum,x,n,count=0,no;
    printf("Enter an number ");
    scanf("%d",&no);
        sum=0;
        n=no;
        while (n!=0)
        {
            x=n%10;
            sum=sum+(x*x*x);
            n=n/10;
        }
    if(no==sum)
            printf("%d is Armstrong number",no);
        else
            printf("%d is not Armstrong number",no);
  
    return 0;
}