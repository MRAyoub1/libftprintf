#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int variadic(char *str, ...)
{
	va_list list;
	va_start(list, str);
	int res;
	while(*str)
	{
		if (*str == '%' && *(str + 1) == 'd')
		{
			res = va_arg(list, int);
			printf("%d", res);
		      	str += 1;	
		}
		else
			write(1, str, 1);
		str++;		
	}
	va_end(list);
	return 0;
}
int main()
{
	variadic("%da%d %d", 300 , 20, 30);
	printf("\n%da%d %d", 10 , 20, 30);	
}
