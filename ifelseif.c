#include<stdio.h>
int main(){
    int per;
    printf("Enter the percentage: ");
    scanf("%d", &per);
    if(per >=80 && per <= 100){
        printf("you are in merit");
    }
    else if(per >=60 && per < 80){
        printf("you are in Ist division");
    }
    else if(per >=45 && per < 60){
        printf("you are in IInd divison");
    }
    else if(per >=33 && per < 45){
        printf("You are in IIIrd division");
    }
    else if(per < 33){
        printf("You are fail");
    }
    else{
        printf(" Please enter valid percent");
    }
}