/*
string in C
*/
#include<stdio.h>
int main()
{
    char c[10],z[10];
    char x[10]= {'m','a','d','d','y','\0'};
    char y[10]= {'m','a','d','d','y','\0'};
    printf("x is : %s",x);
    printf("\nEnter The String : ");
    gets(c);
    printf("\nCompare   : %d",strcmp(x,c));//string compare
    printf("\nLength    : %d",strlen(c));//string length
    printf("\nReverse   : %s",strrev(c));//string reverse
    printf("\nUppercase : %s",strupr(c));//string uppercase
    printf("\nLowercase : %s",strlwr(c));//string lowercase
    printf("\nCopy      : %s",strcpy(z,c));//string copy
    strcat(x,y);
    printf("\nConcatenation : %s",x);//string concadenation
}

