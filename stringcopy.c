#include<stdio.h>
#include<string.h>
char main(){
    char web [10]= "vikas";
    char site [10]= "infosys";
    // strcpy (web,site);
    strncpy(web, site,2);
    printf("%s", web);
    printf("\n %s \n ", site);
}
