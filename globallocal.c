#include<stdio.h>
#include<conio.h>
int add(int,int);//function prototype
int se = 100;//global VARIABLE
int main(){
    int a,b,ans;
    printf("\n enter two numbers : ");
    scanf("%d %d", &a, &b);
    ans = add(a,b);//function called
    printf("Addition : %d\n", ans);
}
/* function declaration*/
int add(int n, int m){
    return(n+m+se);
}