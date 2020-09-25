#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("number is positive");
         scanf("%d", &a);
    }
    else if(a<0){
        printf("number is negative");
         scanf("%d", &a);
    }
    else{
        printf("number is equals to zero");
         scanf("%d", &a);
    }
    return 0;
}