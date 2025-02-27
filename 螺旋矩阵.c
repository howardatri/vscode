#include <stdio.h>
int main()
{
	int N, a[30][30], num = 1;
	scanf_s("%d", &N);
	for (int i = 0; i < N / 2; i++)
	{
		for (int x = i; x < N - 1 - i; x++)
			a[i][x] = num++;
		for (int y = i; y < N - 1 - i; y++)
			a[y][N - 1 - i] = num++;
		for (int z = N - 1 - i; z >= i + 1; z--)
			a[N - 1 - i][z] = num++;
		for (int p = N - 1 - i; p >= i + 1; p--)
			a[p][i] = num++;
	}
	if (N % 2 != 0)
	{
		a[N / 2][N / 2] = num;
		for (int k = 0; k < N; k++)
		{
			for (int j = 0; j < N; j++)
				printf("%4d", a[k][j]);
			if (k < N - 1)
				printf("\n");
		}
	}
	else
		for (int k = 0; k < N; k++)
		{
			for (int j = 0; j < N; j++)
				printf("%4d", a[k][j]);
			if (k < N - 1)
				printf("\n");
		}
	return 0;
}