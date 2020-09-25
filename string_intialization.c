#include<stdio.h>
#include<conio.h>
int main(){
    char name[2][10];
    printf("Enter two string : ");
    scanf("%s %s ", name[0], name[1]);
    printf("\n first string : %s \n second string : %s", name[0], name[1]);
    printf("\n %c\n ", name[0] [2]);
}