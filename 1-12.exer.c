#include <stdio.h>
#include <stdlib.h>

/* Exercise 1-12. Write a program that prints its input one word per line. */
int main() {
    int c, inspace;

    inspace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!inspace) {
                inspace = 1;
                putchar('\n');
            }
        } else {
            inspace = 0;
            putchar(c);
        }
    }
    return 0;
}
