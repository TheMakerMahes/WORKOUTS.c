/*
2D array
*/
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,r,cc;
    printf("\nEnter The Rows : ");
    scanf("%d",&r);
    printf("\nEnter The Columns : ");
    scanf("%d",&cc);
    for(i=0;i<r;i++)
    {
        for(j=0;j<cc;j++)
        {
            printf("\nEnter The Value of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<cc;j++)
        {
            printf("\nEnter The Value of b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<cc;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
