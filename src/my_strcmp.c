/*
** my_strcmp.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:55:35 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:55:37 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (!(*s1))
			return (0);
	}
	return (*s1 - *s2);
}
