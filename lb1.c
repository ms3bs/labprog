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
		printf("введите\n");
		printf("1.[option]\n  -l, --lines\n  -c, --bytes\n  -w, --words\n");
		printf("2.filename");
		return 0;
	}
	if ((f = fopen(argv[2], "r")) == NULL)
	{
		printf("такого файла нет");
		return 0;
	}
	return 0;
}