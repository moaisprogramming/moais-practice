#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int ** generate (int nRows, int nCols)
{
	int **matrix;
	int size, j,i;
	void *address;
	//Сначала выделяем память под массив указателей на строки
	size = nRows * sizeof(int*); // Считаем требуемый размер (в байтах) массива указателей (верхнего уровня)
	address = malloc(size); //Запрашиваем у системы непрерывный блок памяти требуемого размера и сохраняем адрес его начала во временной переменной
	matrix = (int**)address; //У временной переменной тип - указатель на нечто. Приводи её к типу указатель на int*, так как мы запрашивали память под массив типа int*

	//Затем выделяем память под каждую строку (массив) и делаем так чтобы соответствующий указатель из массива указывал на эту строку
	for (i = 0; i < nRows; i++)
	{
		matrix[i] = (int*)malloc(nCols * sizeof(int));
	}

	//Инициализируем генератор случайных чисел текущим временем, чтобы при каждом запуске программы псевдослучайные числа были разными
	srand(time(NULL));

	for (i = 0; i < nRows; i++)
	{
		for (j = 0; j < nCols; j++)
		{
			matrix[i][j] = rand()%20 - 10;
		}
	}

	return matrix;
}

void show ( int **matr, int nRows, int nCols )
{
	int row, column;
	for ( row = 0; row < nRows; row++ )
	{
		for ( column = 0; column < nCols; column++ )
		{
			printf ( "%i\t", matr[row][column] );
		}
		printf ( " \n " );
	}
}

void setfree ( int **matr, int nRows )
{
	int i;
	for ( i = 0; i < nRows; i++ )
	{
		free ( matr[i] );
	}
	free ( matr );
}

//Под матрицей понимаем УКАЗАТЕЛЬ на первый элемент массива состоящего из элементов типа int*, этот УКАЗАТЕЛЬ имеет тип int**
//Если мы в функции main объявили указатель типа int** (например int** matr) и хотим сделать так чтобы он изменился в какой-то функции, в которую мы его передадим, то мы должны передать не matr,
//а адрес matr, чтобы функция смогла пройти по этому адресу и изменить значение, лежащее там. Таким образом функция должна иметь параметр int***, а мы будем передавать в неё не matr, а &matr
void scan_mass(int ***matrix, int *rows, int *cols)
{
	int i,j;
	printf("Rows :");
	scanf("%d",rows);
	printf("Columns :");
	scanf("%d",cols);
	//Три строки выделения памяти ужали в одну, как это принято
	*matrix=(int**)malloc(*rows*sizeof(int*));

	for (i=0; i<*rows; i++)
	{
		(*matrix)[i]=(int*)malloc(*cols*sizeof(int));
	}

	for (i = 0; i <* rows; i++)
	{
		for(j = 0; j < *cols; j++)
		{
			printf ("m[%d][%d] = ",i,j);
			scanf("%d",&(*matrix)[i][j]);
		}
	}

}