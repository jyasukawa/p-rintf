#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define ON 1
# define OFF 0

int   ft_printf(const char *format, ...);

void	ft_putchar_count(int c, int *count);
void	ft_putstr_count(char *s, int *count);

void	ft_putnbr_count(int n, int *count);
void	ft_putaddress_count(uintptr_t address, int *count, int flag);
void	ft_putunsigned_count(unsigned int u, int *count);
void	ft_puthex_count(unsigned int u, int *count, char c);

#endif