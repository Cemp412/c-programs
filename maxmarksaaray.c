#include<stdio.h>
int main()
{
    int i, max =0, mark[10];
    int sm=1;
    for(i=0; i<10; i++){
        printf("\n student  no : %d", sm++);
        printf("\n marks obtained out of 50 : ");
        scanf("%d", &mark[i]);

    }
    for(i=0; i<10; i++){
        if( mark[i] > max)
            max = mark[i];

        
    printf("\n Maximum marks : %d\n\n", max);
    }
}