#include<stdio.h>
#include<string.h>
char main(){
    char web [100]= "pninfosys it company gwalior";
    char *p;
    p = strstr (web, "an");
    // p = strrstr (web, "an"); //not support compiler
    printf("%s", p);
}