//Global Varible
#include<stdio.h>
void display();
int a=10;
int main()
{
    printf("\nA : %d ",a);
    display();
    return 0;
}
void display()
{
    a++;
    printf("\n Value of A : %d ",a);
}
