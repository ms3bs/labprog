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
int main()
{
	return 0;
}