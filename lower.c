#include<stdio.h>
#include<ctype.h>
main()
{
    char x;
    printf("\n Enter capital letter:");
    scanf("%c", &x);

    /*y=tolower(x);
    printf("%c",y);*/
    putchar(tolower(x));
    getch();
   return 0;
}
