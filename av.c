#include <stdio.h>
/**
 * main - function that prints all the arguments, without using ac.
 * av: is a NULL terminated array of strings.
 * ac: is the number of items in av.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int n;

	for (n = 0; n < ac; n++)
		printf("%s\n", av[n]);
	return (0);
}
