#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void)
{
	char c;

	c = '0'-1;
	while(++c <= '9')
	{
		ft_putchar(c);
	}
}

int 	main()
{
	ft_print_alphabet();
	return (0);
}
	
