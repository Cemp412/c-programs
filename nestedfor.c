#include<stdio.h>
int main(){
    int i, j, N;
    /* Input number of rows from user*/
    printf("Enter number of rows : ");
    scanf("%d", &N);
    /* Iterate number of rows from user*/
    for(i=1; i<=N; i++){
        /*Iterate over columns*/
     for(j=1; j<=N; j++){
         printf("*");

     }
     /*Move to the next line row*/
     printf("\n");

    }
    return 0;
}