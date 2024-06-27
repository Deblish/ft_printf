#include "../include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("%bbb%b%cc\n", 'x', 'y', 'z');
	//you are skipping the 'b' format, even though you should print it
	ft_printf("%bbb%b%cc\n", 'x', 'y', 'z');
	return 0;
}
