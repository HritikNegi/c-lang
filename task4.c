//program to insert an element into a list of elements in the Array

#include<stdio.h>
int main()
{
    int n,num,p,i;
    
    printf("\nenter size of the array:");
    scanf("%d",&n);
    
    int array[n+1];
    
    printf("enter value in array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
      }
    printf("enter a number to be insert: ");
    scanf("%d",&num);
    
    printf("enter position where a number to be inserted: ");
    scanf("%d",&p);
    for(i=n;i>p-1;i--){
        array[i]=array[i-1];
      }
    array[p-1]=num;
    printf("after inserting %d at position %d the array is\n", num,p);
    for(i=0;i<n+1;i++){
        printf("%d ", array[i]);
      }
    return 0;
}
