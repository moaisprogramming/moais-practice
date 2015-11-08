#include <stdio.h>
#include "matrix.h"

void main()
{
	//Put your code here ...
	int m, n;
	int **q;
	scan_mass(&q,&n,&m);
	//q = generate( n, m );
	show( q, n, m );
	
	setfree( q, n );
	return;
}

