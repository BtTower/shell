#ifndef STRING_FUNCS
#define STRING_FUNCS

struct String {
    int length;
    char* start;
};

void initialiseString(struct String *theString);
void appendToString(struct String *theString, char c);
void printString(struct String *theString);
char charAt(struct String *theString, int i);

#endif