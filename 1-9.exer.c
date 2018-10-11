#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, spaces;

    spaces = 0;
    while ((c = getchar()) != EOF) {
        if(c == ' ') {
            if (!spaces) {
                spaces = 1;
                putchar(c);
            }
        } else {
            spaces = 0;
            putchar(c);
        }

        // A bit different approach but same results
        // if(c == ' ' && !spaces) {
        //     spaces = 1;
        //     putchar(c);
        // } else if (c != ' ') {
        //     spaces = 0;
        //     putchar(c);
        // }
    }

    return 0;
}
