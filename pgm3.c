#include <stdio.h>

int main() {
    char str[1000];
    int i, lines=0, words=0, chars=0;

    printf("Enter text:\n");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        chars++;
        if(str[i]=='\n')
            lines++;
        if(str[i]==' ' || str[i]=='\n')
            words++;
    }

    printf("Lines: %d\n",lines);
    printf("Words: %d\n",words);
    printf("Characters: %d\n",chars);
}