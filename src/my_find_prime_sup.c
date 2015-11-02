/*
** my_strupcase.c for my_strupcase in /Users/synxs/etna/piscine/c/j05/libmy
**
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
**
** Started on  Sun Mar 30 23:49:03 2014 BOUHIER Jean-Baptiste
** Last update Mon Mar 31 00:07:33 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int		my_find_prime_sup(int nb)
{
	int		i;

	if ((my_is_prime(nb)) == 0)
	{
		for (i = nb; i <= 2147483647;i++)
		{
			if ((my_is_prime(i)) == 1)
				return (i);
		}
	}
	return (nb);
}
