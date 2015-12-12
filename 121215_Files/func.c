#include<stdio.h>
#define SIZE 512
int get_file_lines_count(char* fileNAME)
{
	char buff[SIZE];
	int a, b, c;
	a = 0;
	FILE* fp = fopen(fileNAME, "r");
	if (fp == NULL)
	{
		printf("ERROR\n");
		return -1;
	}
	while (feof(fp) == 0)
	{
		b = fread(buff, sizeof(char), SIZE, fp);
		for (c = 0;c < b;c++)
		{
			if (buff[c] == '\n')
				a++;
		}
	}
	fclose(fp);
	return a + 1;
}
