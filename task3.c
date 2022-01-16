//program to count numbers greater than, Less than or equal to a number 'K' in an array by accepting the value of K from the user.
#include<stdio.h>
int main()
{
    int num,i,k;
    
    printf("\nENTER SIZE OF ARRAY:");
    scanf("%d",&num);
    
    int a[num];
    
    printf("\nENTER NUMBER->");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
      }
    
    printf("\nENTER NUMBER (K) FOR COMOPARISON:");
    scanf("%d",&k);
    int large=0, small=0,equivalent=0; 
    for (i=0;i<num;i++){
        if(a[i]>k)
            large++;
    
        else if(a[i]<k)
            small++;
    
        else
            equivalent++;
      }
    
    printf("\nThe count of numbers greater than %d are %d",k,large);
    printf("\nThe count of numbers less than %d are %d",k,small);
    printf("\nThe count of numbers equal to  %d are %d",k,equivalent);
    return 0;
}
