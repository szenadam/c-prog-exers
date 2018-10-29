#include <stdio.h>
#include <stdlib.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
int main() {
    int c, cw;

    cw = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
            ++cw;
    printf("%d\n", cw);
    return 0;
}
