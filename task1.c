// program to find the sum and average of given N elements in an array.
#include<stdio.h>

int main()
{
    int num, sum=0,i;
  
    printf("\nENTER SIZE OF ARRAY->");
    scanf("%d",&num); 
  
    int array[num];
  
    printf("\nENTER NUMBER->");
    for (1-0;1<num;i++){
    scanf("%d",&array[1]);
    }
    for (i=0;i<num; i++){
    sum=sum+array[i];
    }
    float avg=(float)sum/num;
    printf("\nSUM OF NUMBERS IN THE ARRAY- %d" ,sum);
    printf("\nAVG OF NUMBERS IN THE ARRAY- %6.2f",avg);
    return 0;
}
