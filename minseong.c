#include <stdio.h>
#include <ctype.h>

main() {
    int c;

    while((c = getchar()) != EOF)
        putchar(tolower(c));
        //gg
    return 1;
}