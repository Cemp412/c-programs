#include<stdio.h>
#include<conio.h>
void add (int, int);
void main(){
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    add(a,b);//function called
    printf("Good job");
}

/* function declaration*/
void add(int n, int m){
    int s;
    s = n+m;
    printf("\n Addition : %d\n",s );
}