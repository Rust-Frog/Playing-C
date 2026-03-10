//
// Created by chef on 3/11/26.
//

#include <stdio.h>

int main() {

    int c, nwhitespaces, nothers;

    nwhitespaces = nothers = 0;

    int ndigits[10];

    for (int i = 0; i < 10; i++) {
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0'  && c <= '9') {
            ndigits[c - '0']++; // Working on ASCII
        } else if (c == ' ' || c == '\n' || c == '\t') {
            nwhitespaces++;
        } else {
            nothers++;
        }
    }

    printf("Digits: ");
    for (int i = 0; i < 10; i++) {
        printf("%d. %d ", i, ndigits[i]);
    }

    printf("\nWhitespaces: %d\nOthers: %d\n", nwhitespaces, nothers);



    return 0;
}