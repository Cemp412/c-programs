#include<stdio.h>
int main(){
    int a;
 printf("enter a number : ");
 scanf("%d", &a);
 if(a%2==0){
     printf("no is even");
     scanf("%d", &a);
 }
 else{
    printf("no is odd");
    scanf("%d", &a);
 }
 return 0;
}