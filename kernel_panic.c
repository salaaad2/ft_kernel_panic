#include <stdio.h>
#include <stdlib.h>

int		main(void) 
{
	int *p;
	while(1)
	{
		int inc = 1024 * 1024 * sizeof(char);
		p = (int*)calloc(1,inc);
	}
}
