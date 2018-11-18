#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main() {
    char s[10];
    itoa(-42, s);
    printf("%s", s);

    return 0;
}

void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/*convert n to characters in s*/
void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) /*record sign*/
        n = -n;
    
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
