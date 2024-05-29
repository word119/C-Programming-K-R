#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUMBER  '0' // signal that a number was found

int getch(void);
void ungetch(int);

/*getop: get next operator or numeric operand*/
int getop(char s[]){
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;   // c is operator +*-/ or others, but not number
    i = 0;
    if (isdigit(c)) // collect integer part
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')   // collect fraction part
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}