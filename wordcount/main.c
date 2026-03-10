//
// Created by chef on 3/10/26.
//

#include <stdio.h>


#define YES 1
#define NO 0


int main() {
    int c, num_lines, num_words, num_chars, inword;

    inword = NO;

    num_lines = num_chars = num_words =0;

    while ((c = getchar()) != EOF) {
        num_chars++;
        if (c == '\n')
            num_lines++;
        if (c == ' ' || c == '\n' || c == '\t') { // deterministic check of new word
            inword = NO;
        } else {
            if (inword == NO) { // check if we encounter space, newline or TAB
                num_words++;
                inword = YES;
            }
        }
    }
    printf("number of words: %d\nnumber of lines: %d\nnumber of chars: %d\n", num_words, num_lines, num_chars);
    fflush(stdout);

    return 0;
}