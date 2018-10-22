/*
 * Write a program to print all input lines that are longer than 80 characters.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
#define MAXLEN 81

int getline(char line[], int max);
void copy(char from[], char to[]);

int main() {
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        if(len > MAXLEN)
            printf("%s\n", line);
    }

    return 0;
}

int getline(char line[], int max) {
    int i = 0;
    int c = 0;

    for (i=0; ((c = getchar()) != EOF) && c != '\n' && i < max-1; ++i)
        line[i] = c;
    
    if (c == '\n')
        line[i++] = c;
    
    line[i] = '\0';

    return i;
}
