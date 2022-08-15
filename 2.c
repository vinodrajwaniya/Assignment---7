#include<stdio.h>
int main()
{
    int n,next=0,pre=0,cur=1,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    printf("1 ");
    for(i=0;i<(n-1);i++)
    {
        next=pre+cur;
        printf("%d ",next);
        pre=cur;
        cur=next;
    }
    return 0;
}