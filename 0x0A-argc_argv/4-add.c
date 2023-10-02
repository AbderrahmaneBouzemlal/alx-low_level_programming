#include <stdio.h>
#include <stdlib.h>
/**main - Entry point adds to numbers
 * @argc: The count of the nubmers
 * @argv: Array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int sum = 0;
	int x;
	
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		x = atoi(argv[i]);
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
