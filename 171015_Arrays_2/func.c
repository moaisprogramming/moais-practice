int getlongword (char *str)
{
	//counter - ����� �������� �����
	//ind - ������ �������� �����
	//longind - ������ �������� ������ �������� �����
	//longword - ����� �������� ������ �������� �����
	//���� ����� "�������" �������� �����, �� ������ �������� ��������� � ������ ������ ��������� str
	int counter = 0, ind = 0, longind = 0, longword = 0;
	//����������� ���� - ���������� ��������. ���� �� ����, ������ ������� �������� ������ ���� ���-�� ������
	while (1)
	{
		//������ �������� ����� while ������������ 1 ������ �������� ������
		
		//���� ������� ������ ��� ������ ��� ����� ������ ...
		if ((*str == ' ') || (*str == '\0'))
		{
			// ... ������� ����� �������� ����� � ����������� �� ������ ������ ����� ...
			if (longword < counter)
			{
				//...���� ������� ����� �������, �� ���������� ��� ���������
				longword = counter;
				longind = ind;
			}

			//��� �������� ����������, ����� �������� �� ������ ������� ������ ������ ������� �������
			if(counter != 0)
				ind++;

			//���� �� ��������� ������ ��� ����� ������ ��� ������ ��� ��� ���� �������� ������� ����� ������ �����. �������� �������
			counter = 0;

			//���� ��������� ����� ������ - ������� �� �����. ������ ������ ������
			if (*str == '\0')
				break;
		}
		else
		{
			//���� ��� �� ������ � �� ����� ������ �� ����������� ... ������� ��� �� �� ����������� ����
			counter++;
		}
		//� ����� ������ �������� ��������� � ���������� �������
		str++;
	}
	//���������� ��������� �������� ������� ����������� �����
	return longind;
}

#include <stdio.h>
void print_word(char* str, int i)
{
	int counter = 0, ind = 0, longind = 0, longword = 0;
	while (1)
	{
		if (ind==i) 
		{
			printf("%c",*str);
		}
		if ((*str == ' ') || (*str == '\0'))
		{
			if(counter != 0)
				ind++;
			counter = 0;
			if (*str == '\0')
				break;
		}
		else
			counter++;
		str++;
	}
	
	printf("\n");
}