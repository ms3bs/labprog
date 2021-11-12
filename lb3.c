#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	FILE* in = fopen("access_log_Jul95.txt", "r");
	FILE* out = fopen("0.txt", "w");
	int par, head = 0, tail = 0, m = 0, max = 0, sum = 0, output[2];
	scanf("%d", &par);
	int* steck = malloc(sizeof(int) * (par + 2));
	int* steck2 = malloc(sizeof(int) * (par + 2));
	int mu[] = { 24 * 60 * 60, 0, 60 * 60, 60, 1 };
	char strl[300];
	return 0;
}