//Call by Reference Function in C Programming
/*
Swaping A and B value
*/
#include<stdio.h>
void swap(int *x,int *y)
{
    int u;
    u=*x;
    *x=*y;
    *y=u;
}
int main()
{
    int a,b;
    printf("\nEnter the A and B value : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore the Swapping A : %d | B : %d ",a,b);
    swap(&a,&b);
    printf("\nAfter the Swapping A : %d | B : %d ",a,b);
    return 0;
}
