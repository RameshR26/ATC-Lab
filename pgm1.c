#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {"int","float","char","double","if","else","while","for","return","void"};
int is_keyword(char *s) {
    for (int i = 0; i < 10; i++)
        if (strcmp(s, keywords[i]) == 0) return 1;
    return 0;
}

int main() {
    char input[200], token[50];
    int i = 0, j = 0;
    printf("Enter expression: ");
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);
    while (i < len) {
        if (isspace(input[i])) { i++; continue; }
        if (isalpha(input[i]) || input[i] == '_') {
            j = 0;
            while (isalnum(input[i]) || input[i] == '_')
                token[j++] = input[i++];
            token[j] = '\0';
            if (is_keyword(token)) printf("KEYWORD: %s\n", token);
            else printf("IDENTIFIER: %s\n", token);
        } else if (isdigit(input[i])) {
            j = 0;
            while (isdigit(input[i])) token[j++] = input[i++];
            if (input[i] == '.') { token[j++] = input[i++];
                while (isdigit(input[i])) token[j++] = input[i++]; }
            token[j] = '\0';
            printf("NUMBER: %s\n", token);
        } else {
            char op[3] = {input[i], '\0', '\0'};
            if ((input[i]=='<'||input[i]=='>'||input[i]=='='||input[i]=='!') && input[i+1]=='=') {
                op[1] = '='; i++;
            }
            printf("OPERATOR: %s\n", op);
            i++;
        }
    }
    return 0;
}