#include <stdio.h>

main()
{
    int c, nl;
    nl = 0;
    while( (c = getchar()) != EOF)
        if( c == '\n')
            ++nl;
    printf("\nlines: %d\n", nl);

}