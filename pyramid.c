#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);           
 for(i=n; i>=1; i--)
    {
        
        // for(j=1; j<(i*2)-1; j++){
        //     printf("*");

        
        for(j=i; j<n; j++){
            printf(" ");
        }
        for(j=i; j<n; j++){
            printf("*");
        }
        
        
        printf("\n");
    }

}