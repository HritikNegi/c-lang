//program to test whether a given matrix of order M*N is an UPPER-TRINGULAR matrix or not

#include<stdio.h>
#define row 50
#define col 50
int main()
{
    int a[row][col],flag=0;
    int i,j,r,c;
    
    printf("ENTER the number of ROW AND COLUMN FOR MATRICES-:");
    scanf("%d %d",&r,&c);
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
            for(j=0;j<i;j++)
            {
                if(a[i][j]==0)
                flag=0;
                
                else
                flag=1;
            }
            
        }
        
        if(flag==0)
        {
            printf("INPUTTED MATRIX IS A UPPER TRIANGULAR MATRIX:");
        }
        else
        {
             printf("INPUTTED MATRIX IS NOT A UPPER TRIANGULAR MATRIX:");
        }
    return 0;
}
