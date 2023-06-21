#include <stdio.h>

main()
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 20)
		{
			printf("hot ");
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}
