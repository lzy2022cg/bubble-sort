#include <stdio.h>
#include <stdlib.h>
void sorte(int a[], int n);
int main()
{
	int n, i, *ptr;

	printf("Input the number of array elements:");
	scanf("%d", &n);
	if ((ptr = (int *)calloc(n, sizeof(int))) == NULL)
	{
		printf("Not able to allocate memory:");
		exit(1);
	}
	printf("Input array element:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
	}
	printf("After sorted:");
	sorte(ptr, n);
	free(ptr);

	return 0;
}
void sorte(int a[], int n)
{
	int i, j, pos, temp;

	i = n - 1;
	while (i > 0)
	{
		pos = 0;
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				pos = j;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		i = pos;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}