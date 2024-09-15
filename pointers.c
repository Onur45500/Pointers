
/* pointers.c */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[32];
	char *p;

	strncpy(str, "I like apples", 31);
	p = str;
	
	printf("The string : %s\n", str);
	printf("The pointer is pointing to the string : %s\n", p);
	printf("The pointer is pointing to the string + 1 : %s\n", p + 1);
	printf("The pointer is pointing to the first character : %c\n", *p);

	return 0;
}
