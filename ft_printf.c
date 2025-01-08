/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:23:34 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/08 20:20:39 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *fmt, ...)
{
	va_list	args;
	char	c;
	int		ctr;

	va_start(args, fmt);
	ctr = 0;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
			}
		}
		else
			write(1, fmt, 1);
		fmt++;
		ctr++;
	}
	va_end(args);
	return (ctr);
}

int	main(void)
{
	printf("Probando caracter %c \n", 'A');
	ft_printf("Probando caracter %c ", 'A');
}
