/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each 
 * line of input, and to delete entirely blank lines.
 */
#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int max);

// trailing = at the end of the line. A harder solution would be if
// you want to remove beginning blanks as well.
// empty line = one new line character
int main() {
    int i;
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) != 0 ) {
        if (len > 1) { // its not an empty line
            for (i = len-1; (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i)
                ;
            line[++i] = '\n'; // Readd newline char and null terminator to line
            line[++i] = '\0'; // null terminator is needed for printf
            printf("%s", line);
        }
    }

    return 0;
}

int getline(char s[], int max) {
    int i, c;
    for (i=0; i<max-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
