#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>

int atoi(char s[]);
void shellsort(int v[], int n);
void reverse(char s[]);

int main() {
    assert(atoi("42") == 42);
    assert(atoi("-42") == -42);

    int a[5] = {5,4,3,2,1};
    shellsort(a, 5);
    for (int i = 0; i < 5; i++) {
        assert(a[i] == i+1);
    }

    char s[] = "foo";
    reverse(s);
    assert(strcmp("oof", s) == 0);

    return 0;
}

int atoi(char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) /*skip white space*/
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-') /*skip sign*/
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}