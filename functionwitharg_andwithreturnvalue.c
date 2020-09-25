#include<stdio.h>
#include<conio.h>
int add (int,int);/* function prototype*/

void main(){
    int b,a,ans;
    printf("\n Enter two numbers : ");
    scanf("%d %d", &a, &b);
    ans = add(a,b);
    printf("Addition : %d\n", ans);

}
/* function declaration */
int add (int n, int m)
{
    return(n+m);
}