#include <stdio.h>
#include <Windows.h>
#include "func.h"

long get_file_size(FILE* pFile)
{
	fseek(pFile, 0, SEEK_END);
	return ftell(pFile);
}

int getAn(int a, int n, int d)
{
	if (n == 1)
	return a;
	else return d + getAn(a, n - 1, d);
}
int summAn(int a, int n, int d)
{
	if (n == 1)
		return a;
	else return getAn(a, n, d) + summAn(a, n - 1, d);
}


int main()
{
	int a;
	long size;
	FILE *pFile;
	pFile = fopen("text.txt", "r");
	if (pFile == NULL)
	{
		printf("Error while opening file\n");
		system("PAUSE");
		return 1;
	}
	size = get_file_size(pFile);
	printf("File size = %d\n", size);
	fclose(pFile);
	a = get_file_lines_count("Text.txt");
	printf("Lines count = %d\n", a);
	printf("s=%d\n", summAn(0, 3, 2));
	system("PAUSE");
	return 0;
}
