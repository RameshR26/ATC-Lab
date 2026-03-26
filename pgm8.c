#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter statement: ");
    gets(str);

    if(strstr(str,"if"))
        printf("IF statement detected");
    else if(strstr(str,"while"))
        printf("WHILE statement detected");
    else
        printf("Other statement");
}