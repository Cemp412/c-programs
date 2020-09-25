#include<stdio.h>
int main()
{
    int a , b, c;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &b);
   
    c = a+b;
    printf("a+b = %d\n",c);
    c =a-b;
    printf("a-b = %d\n",c);
    c= a*b;
    printf("a*b = %d\n",c);
    c =a/b;
    printf("a/b = %d\n",c);
    c = a%b;
    printf("The value of remainder when a is divided by b = %d\n",c);
    return 0;

}