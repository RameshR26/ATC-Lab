#include <stdio.h>

int main(){
    printf("Grammar:\n");
    printf("E -> E+E | E*E | id\n");
    printf("This grammar is ambiguous\n");
    return 0;
}