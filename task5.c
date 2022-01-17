//program to print transpose of a matrix of order M * N accepted from the user
#include<stdio.h>
#define row 50
#define col 50
int main()
{
    
    int a[row][col],b[row][col];
    int i,j,r,c;
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES-:");
    scanf("%d%d",&r,&c);
    
    printf("\nENTER ELEMENTS FOR MATRICES->\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nINPUTTED MATRIX: \n");
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++) 
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nTRANSPOSE OF MATRIX:\n"); 
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
