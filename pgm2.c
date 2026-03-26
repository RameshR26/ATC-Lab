#include <stdio.h>

int main() {
    char input[1000];
    int i = 0;

    printf("Enter code:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {

        /* single-line comment */
        if (input[i] == '/' && input[i+1] == '/') {
            while (input[i] != '\n' && input[i] != '\0')
                i++;
        }

        /* multi-line comment */
        else if (input[i] == '/' && input[i+1] == '*') {
            i += 2;
            while (!(input[i] == '*' && input[i+1] == '/')) {
                i++;
            }
            i += 2;
        }

        else {
            printf("%c", input[i]);
            i++;
        }
    }
    return 0;
}