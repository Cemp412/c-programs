#include<stdio.h>
#include<conio.h>
int main(){
    //char name[2][10];
    //printf("Enter two string : ");
    //scanf("%s %s", name[0], name[1]);
    //printf("\n First string : %s \n Second string : %s", name[0], name[1]);
    //printf("\n %c ", name[0] [2]);

    char name[2][10] = {"ram", "vikas"};
    printf("%s %s", name[0], name[1]);
    printf("\n %c ", name[0][2]);
}