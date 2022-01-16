//program to find biggest and smallest element of an array with N elements.

#include <stdio.h>
int main()
{
    int num,i,small,large;
    
    printf("\nENTER SIZE OF ARRAY->");
    scanf("%d",&num);
    
    int array[num];
    
    printf("\nENTER NUMBERS->");
    for(i=0;i<num;i++){
    scanf("%d",&array[i]);
    }
    
    large=small=array[0]; 
    
    for(i=0;i<num;i++){
       if(array[i]>large) 
           large=array[i];
       
       if(array[i]<small)
           small=array[i];
    }
    
    printf("\nSMALLEST NUMBER IS-> %d",small);
    printf("\nLARGEST NUMBER IS-> %d",large);
    
    return 0;
}
