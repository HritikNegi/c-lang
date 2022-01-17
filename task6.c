//program to find the sum of diagnoal elements of a matrix of order M * N
#include<stdio.h>
#define row 50
#define col 50
int main()
{
    int a[row][col],suml=0,sumr=0;
    int i,j,r,c;
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES-:");
    scanf("%d%d",&r,&c);
    
    if(r==c)
    {
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
                if(i==j)
                suml+=a[i][j];
                
                if( (i+j)==(r-1) ) 
                sumr+=a[i][j];
            }
            
        }
        printf("\nSUM OF PRINCIPAL DIAGNOL-> %d", suml); 
        printf("\nSUM OF SECONDARY DIAGNOL-> %d",sumr);
    }
    
    else 
    printf("THIS DO NOT FORM A SQUARE MATRIX:");
    
    return 0;
}
