#include <stdio.h>

/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */
int main() {
    int c;

    c = getchar();

    if (c != EOF)
        printf("Not EOF");

    if (c == EOF)
        printf("EOF");

    return 0;
}
