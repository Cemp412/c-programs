#include<Stdio.h>
#include<conio.h>
int add(void);
void main()
{
    int ans;
    ans = add();
    printf(" Addition : %d", ans);
}
/* function declaration*/
int add(void)
{
    int a,b,c;
    printf("\n Enter two numbers : ");
    scanf(" %d %d ", &a, &b);
    c = a+b;
    return(c);
}