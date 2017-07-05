#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	char c;

	c = c >= 0 ? 'P' : 'N';
	ft_putchar(c);
}

int 	main()
{
	ft_is_negative(-1);
	return (0);
}
	
