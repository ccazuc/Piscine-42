#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z'+1;
	while(--c >= 'a')
	{
		ft_putchar(c);
	}
}

int 	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
	
