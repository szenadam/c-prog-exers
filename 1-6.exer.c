#include <stdio.h>

int main() {
    int c;

    c = getchar();

    if (c != EOF)
        printf("Not EOF");

    if (c == EOF)
        printf("EOF");

    return 0;
}
