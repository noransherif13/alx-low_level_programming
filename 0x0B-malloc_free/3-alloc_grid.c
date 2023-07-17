#include "main.h"

/**
 * **alloc_grid - function that returns 2d zero's matrix
 *
 * @width: input parameter 1
 * @height: input parameter 2
 *
 * Return: tab
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (tab == 0 || height <= 0 || width <= 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab)
				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				tab[i][j] = 0;
			}
		}
	}
	return (tab);

}
