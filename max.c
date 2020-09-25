#include<stdio.h>
int main()
{
    int a, b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b && a>c){
        printf("value of a is max");
        scanf("%d",&a);
    }
    else if(b>c && b>a){
        printf("value of b is max");
         scanf("%d",&b);
    }
    else{
        printf("value of c is max");
        scanf("%d", &c);
    }
    return 0;
}