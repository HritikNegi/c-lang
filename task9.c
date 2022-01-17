//program to find biggest element of a given matrix of order M*N  accepted from the usser
#include<stdio.h>
#define row 50
#define col 50
int main()
{
    int a[row][col];
    int i,j,r,c,lar;
    
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES -:");
    scanf("%d %d",&r,&c);
    
    printf("\nENTER ELEMENTS FOR FIRST MATRICES->\n");
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
    lar=a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++) 
        {
            if(a[i][j]>a[0][0])
            lar=a[i][j];
        }
    }
    printf("LARGEST ELEMENT IN THE MRIRICES IS : %d",lar);
    return 0;
}
