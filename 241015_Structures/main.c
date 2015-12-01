#include <stdio.h>
#include <string.h>
#include "Fraction.h"

typedef struct
{
	char Name[20]; 
	char SureName[20]; 
	int Age;
} StudentType;

struct test1
{
	int a;
	char b;
	int c;
	short d;
};

struct test2
{
	int a;
	char b;
	short c;
	int d;
};

typedef int Integer;
typedef float Real;
//typedef struct Student StudentType;

union Union
{
	int a;
	char b;
	short c;
};

enum Season
{
	Summer,
	Autumn,
	Winter,
	Spring,
	UnknownSeason
};

void PrintfStudent(StudentType *student)
{
	printf("%s, %d\n", student->SureName, student->Age);
}

StudentType GetStudent()
{

}

void main()
{
	StudentType stud;
	StudentType *pStudent;
	enum Season season;

	printf("%d\n", Summer);
	printf("%d\n", Autumn);
	printf("%d\n", Winter);
	printf("%d\n", Spring);
	strcpy(stud.SureName, "Ivanov");
	stud.Age = 20;
	pStudent = &stud;

	(*pStudent).Age = 15;
	pStudent->Age = 20;

	//printf("Union size = %d\n", sizeof(union Union));
	//
	/*printf("Size of Student is %d\n", sizeof(struct Student));
	printf("Size of test1 is %d\n", sizeof(struct test1));
	printf("Size of test2 is %d\n", sizeof(struct test2));
*/
	return;
}