#include <stdio.h>
#include "heap.h"

void main()
{
	int n;
	double * arr;
	double * rarr;
	scanf("%d", &n);
	arr = generate(n);
	//rarr = reverse(arr, n);
	print_array(arr, n);
	/*print_array(rarr, n);*/
	//arrayabs(arr, n);
	insert(&arr, n, 100.0, 2); 
	print_array (arr, n+1);
	return;
}