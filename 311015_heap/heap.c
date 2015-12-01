#include <stdio.h>
#include <stdlib.h>

double* generate(int n)
{ 	
	int i;
	//выделение памяти
	double *pa = (double *)malloc(n*sizeof(double));
	//проверка корректтности выделения
	if (pa == NULL)
	{
		printf("Error!\n");
		return NULL;
	}
	//заполнение массива случайными числами
	for (i = 0; i < n; i++)
		*(pa+i) = (rand()%100-50)/10.0;

	//вернуть указатель на начало массива
	return pa;
}

void print_array(double* arr, int length)
{
	int i;
	for(i = 0; i < length; i++)
		printf("%g ", *(arr + i));
	printf("\n");
}

double* reverse(double* arr, int length)
{
	int i;
	int j;
	double *pa = (double *)malloc(length*sizeof(double));
	for (i = 0; i < length; i++)
	{
		j = length - i - 1;
		*(pa+j) = *(arr+i);
	}
	return pa;
}
void arrayabs( double* ab, int length )
{
	while ( length-- > 0)
	{
		if ( *ab < 0 )
		{
			*ab=-*ab;
		}
		ab++;
	}
}

void insert(double** arr, int length, double el, int pos)
{
	int i;
	int newsize = sizeof(double)*(length+1);
	double* newarr = (double *)malloc(newsize);

	for (i = 0; i < pos; i++)
	{
		*(newarr+i) = *(*arr+i);
	}
	*(newarr+pos) = el;
	for (i = pos; i < length; i++)
	{
		*(newarr+i+1) = *(*arr+i);
	}

	free(*arr);
	*arr = newarr;
}