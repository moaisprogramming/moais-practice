//��� ������ ����� �� ������ ������ ��� �� �� ���������� � ���� ����� ������� ������� �� ����������� ����������
#include <stdio.h>
#include "func.h"

//����� ����������� ��������� � ���� ����� ��� N � M ����� �������� �� 3, �� ���� int mas[N] ����������� � int mas[3]
#define N 3
#define M 3

void main()
{
	//�������� ��������� ������ ��������� ���� int � ����� �� ��������� ��� ����������
	int a[N][M] = {{1,2,2}, {4,1,6}, {7,8,2}};

	//������� ������� print_2dim_array �� ���������� �����������: 
	// 1 ��������� �� ������ ������� ����� ������� 
	// 2 � 3 ����������� ����� ������� �� ������� ���������
	print_2dim_array(&a[0][0], N, M);

	printf("\nmost popular element is %d\n", get_popular_element(&a[0][0], N, M));

	return;
}
