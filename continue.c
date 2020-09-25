#include<stdio.h>
int main(){
    int i=1; //intializing local variable
    //starting a loop from 1 to 10
    for(i=1; i<10; i++){
        if(i==8){//if value of i is equals to 5, it will continue  the loop
        //break;
        continue;
        }
        printf("%d\n", i);

    }//end of loop
    return 0;

}