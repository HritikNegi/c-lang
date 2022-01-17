//program to find the product of two matrix of order M*N and P*Q accepted from the usser
#include<stdio.h>
#define row 50
#define col 50
int main()
{
    int a[row][col],b[row][col],ab[row][col];
    int i,j,r,c,m,n,k;
    
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES 1-:");
    scanf("%d %d",&r,&c);
    
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES 2-:");
    scanf("%d %d",&m,&n);
if(c==m)
{
    printf("\nENTER ELEMENTS FOR FIRST MATRICES->\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER ELEMENTS FOR SECOND MATRICES->\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nINPUTTED MATRIX-1: \n");
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++) 
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nINPUTTED MATRIX-2: \n");
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++) 
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0; j<n;j++) 
        {
            ab[i][j]=0;
            for(k=0;k<m;k++)
            {
                ab[i][j]=ab[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    printf("\nPRODUCT MATRIX: \n");
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++) 
        {
            printf("%d\t",ab[i][j]);
        }
        printf("\n");
    }
}
    else
        printf("MULTIPLICATION OF INPUTTED ORDER MRIRICES IS NOT POSSIBEL");
    return 0;
}
