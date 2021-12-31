### C Programming

<details>
   <summary>multiple character input and output</summary>

   <pre>
		#include<stdio.h>
		#include<conio.h>
		void main()
		{
		    	char a[25];
		    	gets(a);
		    	puts(a);
		    	getch();
		}
	</pre>
</details>

<details>
   <summary>multiple character input and output[2]</summary>

   <pre>
		#include<stdio.h>
		int main()
		{
		    char name[30];
		    //printf("Enter your name: ");
		    scanf("%[^\n]",name);
		    printf("Thank you: %s",name);
		    getch();
		    return 0;
		}
	</pre>
</details>


<details>
   <summary>lower alphabet</summary>

   <pre>
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
	</pre>
</details>

<details>
   <summary>upper alphabet</summary>

   <pre>
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
	</pre>
</details>

<details>
   <summary>octal_hexa</summary>

	<pre>
		#include<stdio.h>
		#include<conio.h>
		main()
		{
		    int a;
		    printf("decimal number: ");
		    scanf("%d",&a);
		    printf(" \nOctal number: %o",a);
		    printf(" \nHexadecimal number: %x",a);
		    getch();
		}
	</pre>
</details>


<details>
   <summary></summary>

   <pre>
		
	</pre>
</details>

