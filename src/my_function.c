#include "my_function.h"

/*print one character*/
void ft_putchar(char c)
{
	write(1,&c,1);
}
/*print a string*/
void ft_putstr(char* str)
{
	int i;

	i = -1;
	while(str[++i])
		write(1, &str[i], 1);
}

/*print a number of a character number*/
void ft_putnbr(int nbr)
{
	if(nbr < 0)
	{
		ft_putchar('-');
		if(nbr == -2147483648)
		{
			ft_putstr("2147483648");
			return;
		}
		nbr*=-1;	
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr/10);
		ft_putchar((nbr%10) + '0');
	}
	if(nbr < 9)
	{
		ft_putchar(nbr + '0');
	} 

}

/*calculated the size of string*/
int ft_strlen(char* str)
{
	int len;

	if(!str)
		return(0);
	len = -1;
	while(str[++len]);
	return(len);
}
