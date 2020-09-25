#include<stdio.h>
 void main()
{
 int avg, i, sum=0;
 int marks[10];
 for (i=0; i<=10; i++){
     printf("\n Enter marks ");
     scanf("%d", &marks[i]);/* store data in an array*/
 }
 for(i=0; i<=29; i++){
     sum = sum+marks[i];/* read data from an array*/
     avg = sum/10;
     printf("\n Average marks = %d", avg);
 }
}