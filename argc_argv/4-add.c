#include "stdio.h"
#include "stddef.h"
/**
 * main - prints the result of adding two positive numbers.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful. 1 if error.
 */
int main(int argc, char **argv)
{
	int result = 0;
	int num = 0;
	int i = 1, j = 0;
	char *arg = NULL;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		arg = argv[i];
		num = 0;
		j = 0;
		while (arg[j])
		{
			if (arg[j] < 48 || arg[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
			j++;
		}
		result += num;
		i++;
	}
	printf("%i\n", result);
	return (0);
}
