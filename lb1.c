#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <locale.h>
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	FILE* f;
	if (argc < 2)
	{
		printf("�������\n");
		printf("1.[option]\n  -l, --lines\n  -c, --bytes\n  -w, --words\n");
		printf("2.filename");
		return 0;
	}
	if ((f = fopen(argv[2], "r")) == NULL)
	{
		printf("������ ����� ���");
		return 0;
	}
	int a, b = 0, l = 1, w = 0, c = 0;
	while ((a = fgetc(f)) != EOF)
	{
		if (a == '\n')
		{
			l += 1;
		}
		if (a == ' ' || a == '\n' || a == '\t')
		{
			b = 0;
		}
		else
		{
			if (b == 0)
			{
				w += 1;
			}
			b = 1;
		}
		c += 1;
	}
	return 0;
}