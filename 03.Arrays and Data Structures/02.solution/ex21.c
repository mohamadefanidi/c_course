/* ======================================================================
 *  File    : ex21.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 10:19
 *  Updated : 2026-02-08 10:27
 * ====================================================================== */
 #include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		print_char(str[i]);
		i++;
	}
}

void	hello_function()
{
	print_str("Hello");
}

int	main()
{
	print_str("* Gammal tech *\n");
	hello_function();
}
