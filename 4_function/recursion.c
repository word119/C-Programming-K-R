#include <stdio.h>

/*printd function: print decimal number*/
void printd(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10){
        printd(n / 10);
    }
    putchar(n % 10 + '0');
}

int main()
{
    printd(123);
    printf("\n");
    qsort()
}