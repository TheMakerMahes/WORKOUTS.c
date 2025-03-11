/*
continue
*/
#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nEnter the Number : ");
        scanf("%d",&num);
        if(num==0)
            continue;
        sum+=num;
    }
    printf("\nTotal : %d ",sum);
    return 0;
}
