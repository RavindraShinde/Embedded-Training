//Write a program to take input as a password but should display only x's instead of characters.

#include <stdio.h>
#include <unistd.h>

int main()
{
	char c = getch();
	
	//char a[20] = {0};
	//char *ch = getpass(a);
	//printf("%s\n", ch);
	//printf("%s\n", a);
	
	
	printf("%c\n", c);
	
	return 0;
}
