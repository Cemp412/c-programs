#include<stdio.h>
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("Number is even");

    }
    else if(a%2 != 0){
        printf("Number is odd");

    }
    else{
        printf("Number is not an integer");
    }
}