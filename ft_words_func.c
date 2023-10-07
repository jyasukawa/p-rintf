#include "ft_printf.h"

void	ft_putchar_count(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr_count(char *s, int *count)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*count = *count + 6;
		return ;
	}
	while (s[i])
	{
		ft_putchar_count(s[i], count);
		i++;
	}
}
