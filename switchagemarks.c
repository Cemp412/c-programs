#include<stdio.h>
int main(){
    int age, marks;
    printf("Enter your age");
    scanf("%d", &age);
    printf("Enter your marks");
    scanf("%d", &marks);
    switch(age){
        case 3:
        printf("Age is 3\n");
        switch(marks){
            case 45:
            printf("marks are 45");
            break;
            default:
            printf("Marks are not 45");
           
            
        }
         break;
        case 13:
        printf("Age is 13\n");
        switch(marks){
            case 20:
            printf("marks are 20");
            break;
            default:
            printf("Marks are not 20");
               
        }
        break;
    }
}
