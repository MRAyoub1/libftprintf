#include "libftprintf.h"

void ft_putnbr(int nb)
{
        long l_nb;
        char res;

        l_nb = nb;
         if (l_nb < 0)
         {
                ft_putchar('-');
                 l_nb = -l_nb;
         }
         if (l_nb > 9)
                ft_putnbr(l_nb / 10);
         res = l_nb % 10 + '0';
         ft_putchar(res);
}

