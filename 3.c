#include<stdio.h>
int main()
{
    int n,next=0,pre=0,cur=1,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=pre+cur;
        //printf("%d ",next);
        pre=cur;
        cur=next;
        if(next==n)
        {
            printf("Number Found");
            break;
        }
        if(next>n)
        {
            printf("Not Found");
            break;
        }
    }
    return 0;
}