#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include "Ofile.h"
#include <locale.h>
#include <stdio.h>

void ofile(int i)
{
	FILE* a;
	a = fopen("books.txt", "r");
	char arr[110];
	while (fgets(arr, 110, a) != NULL)
		printf("%s", arr);
	printf("\n\n");
	fclose(a);
}

void summofC(int i = 0)
{
	FILE* a;
	a = fopen("books.txt", "r");
	char arr[200];
	printf("Books about C:\n");
	for (i; i < 13; i++) {
		fgets(arr, 200, a);
		printf("%s", arr);
	}
	printf("Quantity:8\nSumm of prices:4615");
}

