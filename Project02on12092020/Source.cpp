#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, n, px, py;
	scanf("%d", &n);
	px = n;
	py = n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * n; j++)
		{
			if (j == px || j == py)
				printf("*");
			else
				printf(" ");
		}
		px--;
		py++;
		printf("\n");
	}

	return 0;
}