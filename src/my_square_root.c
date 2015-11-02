/*
** my_strupcase.c for my_strupcase in /Users/synxs/etna/piscine/c/j05/libmy
**
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
**
** Started on  Sun Mar 30 23:49:03 2014 BOUHIER Jean-Baptiste
** Last update Mon Mar 31 00:07:33 2014 BOUHIER Jean-Baptiste
*/

int		my_square_root(int nb)
{
	int		i;

	if (nb == 1)
		return (1);
	else
	{
		for (i = 1; i <= (nb / 2); i++)
		{
			if ((i * i) == nb)
				return (i);
		}
		return (0);
	}
}
