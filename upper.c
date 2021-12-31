#include<stdio.h>
#include<ctype.h>
main()
{
    char x, y;
    printf("\n Enter small letter:");
    scanf("%c", &y);
    putchar(toupper(y));

    getch();
    return 0;
}

