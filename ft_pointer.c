/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:02:12 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/11 12:45:07 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int ctr)
{
	write(1, &c, 1);
	ctr++;
}

void	ft_dectohex(int nbr, int ctr)
{
	char	*hexcale;

	hexcale = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_dectohex(nbr / 16, ctr);
		ft_dectohex(nbr % 16, ctr);
	}
	else
	{
		ft_putchar(hexcale[nbr], ctr);
	}
}

void	ft_pointer(void *ptr, int ctr)
{
	unsigned long	dir;

	dir = (unsigned long)&ptr;
	ft_putchar('0', ctr);
	ft_putchar('x', ctr);
	printf("Este numero es el que coje dir: %li \n", dir);
	ft_dectohex(dir, ctr);
}
