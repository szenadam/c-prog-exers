#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, cw;

    cw = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t')
            ++cw;
    printf("%d\n", cw);
    return 0;
}
