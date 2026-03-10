//
// Created by chef on 3/11/26.
//

#include <stdio.h>
// power (x,n) int x, n;{} flags now
int power(int x, int n) {
 int i, p;

    p = 1;

    for (i = 1; i <= n; i++) {
        p = p * x;
    }
    return p;
}

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d, %d \n", power(2, i), power(-3, i));
    }
    return 0;
}