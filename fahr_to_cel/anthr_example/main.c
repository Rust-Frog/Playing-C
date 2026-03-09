//
// Created by chef on 3/9/26.
//

#include <stdio.h>

int main() {
    int fhar;

    for (int fhar = 0; fhar <= 300; fhar += 20) {
        printf("%4d %6.1f\n", fhar, (5.0/9.0) * (fhar - 32.0));
    }
}