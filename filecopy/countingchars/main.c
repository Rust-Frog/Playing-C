//
// Created by chef on 3/9/26.
//
#include <stdio.h>

int main() {

    long count;

    for (count = 0; getchar() != EOF; count++) {
        printf("%ld\n", (count));
        fflush(stdout);
    }

    return 0;
}