#include <stdio.h>
#include <unistd.h>


void _puts_recursion(char *s);
int _putchar(char c);

int main(void)
{
	_puts_recursion("puts with recursion\n");
	return (0);
}


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	
	_putchar(*s);

	_puts_recursion(s + 1);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
