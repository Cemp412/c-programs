#include<stdio.h>
int main()
{
    int a = 8;
    float b = 7.333;
    printf("hello world \n");
    printf("The value of a is %d and the value of b is %10.4f\n", a,b);
   printf("The value of a is %d and the value of b is %.4f\n", a,b);
      printf("The value of a is %d and the value of b is %.8f\n", a,b);
      printf("hello world \n");
      printf(" %8.4f\n",b);


      printf("hello world \n");
      printf(" %-8.4f this",b);
    return 0;
}