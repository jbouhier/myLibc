/*
** my_is_prime.c for  in /Users/synxs/etna/piscine/c/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 15:03:22 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 15:03:24 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int		my_is_prime(int nombre)
{
	if (nombre < 2) return (0);
	
	int i, j=(nombre/2)+1;
	
	for (i = 2; i < j; i++)
	{
		if (nombre % i == 0)
			return (0);
	}
	return (1);
}
