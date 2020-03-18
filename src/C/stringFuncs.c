#include <stdio.h>
#include <stdlib.h>
#include "stringFuncs.h"

void initialiseString(struct String *theString) {
    theString -> length = 0;
    theString -> start = malloc(0);
}

void appendToString(struct String *theString, char c) {
    theString -> length ++;
    theString -> start = realloc(theString -> start, sizeof(char) * theString -> length);
    char* ptr = theString -> start + sizeof(char) * theString -> length - 1;
    *ptr = c;
}

void printString(struct String *theString) {
    for(int i = 0;i<=theString -> length;i++) {
        printf("%c",charAt(theString,i));
    }
}

char charAt(struct String *theString, int i) {
    return *(theString -> start + sizeof(char) * i );
}
