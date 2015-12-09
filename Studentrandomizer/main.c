#include <stdio.h>
#define STUDENTS_COUNT 26
#include <stdlib.h>
#include <time.h>
#include <locale.h>

char* get_random_student()
{
	char* students[STUDENTS_COUNT] = 
	{
		"Аладьин Николай",
		"Алексеев Иван", 
		"Артамонова Екатерина", 
		"Гимадеев Артур", 
		"Гурьянов Владислав", 
		"Ершов Захар", 
		"Кандалова Лейла", 
		"Кислицын Михаил", 
		"Красилов Никита", 
		"Криницын Игорь", 
		"Кузнецов Аркадий", 
		"Кучеренко Александр", 
		"Лапшин Олег", 
		"Макушев Артемий", 
		"Мильчаков Алексей", 
		"Мухновский Олег", 
		"Николаев Евгений", 
		"Петрова Анастасия", 
		"Пряничников Алексей", 
		"Родин Роман", 
		"Румянцев Даниил",
		"Садыров Владислав", 
		"Сергалиева Дана", 
		"Старкова Олеся", 
		"Уткин Илья",
		"Швеев Владислав"
	};

	srand(time(NULL));
	return students[rand() % STUDENTS_COUNT];
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	//Put your code here ...
	printf("%d\n", rand()%26+1 /*get_random_student()*/);
	getchar();
	return;
}