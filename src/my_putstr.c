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

int		my_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
