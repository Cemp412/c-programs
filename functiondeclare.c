#include<stdio.h>
#include<conio.h>
int add (int, int);//return-type function-name(data-type1,data-type2)//function prototype
int main()
{
    int a,b,ans;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    ans = add(a,b);/* function called*/
    // a and b are actual arguments
    printf("Addition : %d\n", ans);
    /*function declaration*/
}
    int add (int n, int m)//n and m are formal arguments
{
    int c;
    c = n+m;
    return(c);
}
