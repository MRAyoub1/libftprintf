#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int main()
{
	int a = 5;
	int *p = &a;
	write(1, &*p, 11);
	return 0;
}

