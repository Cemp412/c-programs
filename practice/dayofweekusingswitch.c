#include<stdio.h>
int main(){
    int daynum;
    printf("Enter day number : ");
    scanf("%d", &daynum);
    
    switch(daynum  ){
        case 1 :
        printf("Day is Monday");
        break;
        case 2 :
        printf("Day is Tuesday");
        break;
        case 3 :
        printf("Day is Wednesday");
        break;
        case 4 :
        printf("Day is Thursday");
        break;
        case 5 :
        printf("Day is Friday");
        break;
        case 6 :
        printf("Day is saturday");
        break;
        case 7 :
        printf("Day is Sunday");
        break;
        default :
        printf("Enter valid day");



    }
}