#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, spaces;

    spaces = 0;
    while ((c = getchar()) != EOF) {
        if(c == ' ') {
            if (!spaces) {
                ++spaces;
                putchar(c);
            }
        } else {
            spaces = 0;
            putchar(c);
        }
    }

    return 0;
}
