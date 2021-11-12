#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
const int EF = 1000000000;
const int k = 35;
struct uint1024_t {
	int a[];
};
void scanf_value(struct uint1024_t* x)
{
	char a[1000];
	int i = 1, n, b, c, d = k + 1;
	scanf("%c", &a[i]);
	while (a[i] != '\n')
	{
		i += 1;
		scanf("%c", &a[i]);
	}
	n = i - 1;
	for (int i = 1; i <= k; i++)
	{
		x->a[i] = 0;
	}
	for (i = n; i >= 1; i--)
	{
		if ((n - i) % 9 == 0)
		{
			c = 1;
			d = d - 1;
		}
		b = a[i] - 48;
		x->a[d] += b * c;
		c *= 10;
	}
}
void pintf_value(struct uint1024_t* x)
{
	int d, c, b = 0;
	for (int i = 1; i <= k; i++)
	{
		d = x->a[i];
		c = EF / 10;
		for (int j = 0; j < 9; j++)
		{
			if (d / c != 0 || b == 1)
			{
				printf("%d", d / c);
				b = 1;
			}
			d = d % c;
			c = c / 10;
		}
	}
}
struct uint1024_t* from_uint(unsigned int y)
{
	struct uint1024_t* x = malloc(sizeof(struct uint1024_t) + 140);
	x->a[k] = y % EF;
	x->a[k - 1] = y / EF;
	for (int i = 1; i < k - 1; i++)
	{
		x->a[i] = 0;
	}
	return x;
}
struct uint1024_t* add_op(struct uint1024_t* x, struct uint1024_t* y)
{
	struct uint1024_t* z = malloc(sizeof(struct uint1024_t) + 140);
	int b = 0;
	for (int i = k; i >= 1; i--)
	{
		z->a[i] = (x->a[i] + y->a[i] + b) % EF;
		b = (x->a[i] + y->a[i] + b) / EF;
	}
	return z;
}
int main()
{
	return 0;
}