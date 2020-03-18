#include <stdio.h>
#include "stringFuncs.h"


struct Command {
    int length;
    struct String* start;
};
int main(int argc, char const *argv[])
{
    while(1) {
        printf("$ ");
        char n;
        struct String inputString; 
        initialiseString(&inputString);
        char str[50];
        scanf("%[^\n]%*c" ,str);
        for(int i =0;i<50 && str[i] != '\0';i++) {
         appendToString(&inputString,str[i]);
        }
        printString(&inputString);
    }
    
    return 0;
}

