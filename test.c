#include "libftprintf.h"

int print(const char *str, ...)
{
	va_list list;
	va_start(list, str);
	while(*str)
	{	
		//if(*str == '%' && *(str + 1) == 'p')
		//{
		//	ft_putchar(va_arg(list, char *));
		//	str += 2;
		//}
		if(*str == '%' && *(str + 1) == 'c')
		{
			ft_putchar(va_arg(list, int));
			str += 2;
		}
		if(*str == '%' && *(str + 1) == 's')
		{
			ft_putstr(va_arg(list, char *));
			str += 2;
		}
		else if(*str == '%' && *(str + 1) == 'd')
		{
			ft_putnbr(va_arg(list, int));
			str += 2;
		}
		else
		{
			write(1, str, 1);				
			str++;
		}
	}
	va_end(list);
	return (0);
}
int main()
{
	int a = 5;
	//print("%p",a);
	printf("%p",&a);
}
