/*
American Standard code for information Interchange(ASCII)
*/
#include<stdio.h>
int main()
{
    int i;
    char a='b';
    for(i=0;i<=225;i++)
    {
        printf("\n%d : %c",i,i);
    }
    printf("\n%c : %c",a,a-32);
    return 0;
}
