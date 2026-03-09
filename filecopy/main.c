//
// Created by chef on 3/9/26.
//

#include <stdio.h>

int main() {

    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
