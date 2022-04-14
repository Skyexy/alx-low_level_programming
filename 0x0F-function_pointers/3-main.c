#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char c = *(argv[2]);
	int y;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(c)(num1, num2) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((c == '/' && num2 == 0) ||
	    (c == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n",  get_op_func(c)(num1, num2));
	return (0);
}
