#include main.h

/**
 * main - script that print alphabets
 *
 * Return: zero
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		 _putchar(alpha);
	}
	_putchar('\n');

}
