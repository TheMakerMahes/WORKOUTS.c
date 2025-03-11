/*
Array
*/
#include<stdio.h>
int main()
{
    int i,a[100],n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Value : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
