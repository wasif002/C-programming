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
