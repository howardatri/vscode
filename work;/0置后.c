#include <stdio.h>
//思路 0和非0分别打印，妙
int main()
{
	int a[100], b[100], * p, * q, i, * originA,  x = 0, y = 0;
	p = a;
	q = b;
	
	originA = &a[0];
	int n;
	scanf("%d", &n);
 
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (*(p + i) != 0)
		{
			q = p + i;
			printf("%d ", *q);
			x++;
			q = q + 1;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == 0)
		{
			originA = p + i;
			printf("%d", *originA);
			y++;
			if (x + y < n)
				printf(" ");
			originA = ++q;
		}
	}
	return 0;
}