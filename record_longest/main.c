//
// Created by chef on 3/11/26.
//

#include <stdio.h>

#define MAX 1000

int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

void copy(char s1[], char s2[]) {
    int i;
    i = 0;

    while ((s2[i] = s1[i]) != '\0')
        i++;
}

int main() {
    int len;
    int max;
    char line[MAX];
    char save[MAX];

    max = 0;

    while ((len = get_line(line, MAX)) > 0)
        if (len > max) {
            max = len;
            copy(line, save);
        }
    if (max > 0)
        printf("%s", save);
        fflush(stdout);
}