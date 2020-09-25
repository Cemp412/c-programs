#include<stdio.h>
#include<conio.h>
void message (void);//function prototype
void main(){
    printf("\n main function\n");
    message();
    printf("\n After calling function\n");

}
/*function declaration */
void message (void)
{
    printf("\n I am subprogram \n ");
}