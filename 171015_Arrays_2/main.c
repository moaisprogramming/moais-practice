#include <stdio.h>
//Эта директива incude включит в это место файла main.c содержимое файла func.h (обратите внимание на двойные кавычки)
// и благодаря этому мы сможем использовать функции из файла func.c 
#include "func.h"


//Функция для тестирования функции getlongword
void Test(char* str, int expected)
{
	//Вычисляем что есть, сравниваем с тем что должно быть и выводим соответствующее сообщение
	int actual = getlongword(str);
	printf("%s -> Expected %d, Actual %d -> %s\n", //Обратите внимание, можно разносить параметры, разделённые запятыми, на разные строки
		str, 
		expected, 
		actual, 
		actual == expected ? "Ok" : "Error");
}

void main()
{
	char a[] = "d sd a sassssss sdfds";

	Test("d sd a sassssss sdfds", 3); 
	Test("d sassssss a sdfds", 1); 
	Test("d sd    a sassssss sdfds", 3); 
	Test("d sd    a sassssss sdfds   ", 3); 
	Test("   d sd    a sassssss sdfds", 3); 

	print_word(a, 3);

	return;
}
