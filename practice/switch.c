#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Enter the number : ");
    scanf("%d", &b);
    switch (a>b){
        case 1:
          printf("a is grater than b");

      
      break;
      default :
      printf("b is greater than a");
      break;
     
    }

}