#include<stdio.h>
int main()
{
    int n,next=0,pre=0,cur=1,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=0;i<(n-1);i++)
    {
        next=pre+cur;
        pre=cur;
        cur=next;
    }
    printf("%d ",next);
    return 0;
}