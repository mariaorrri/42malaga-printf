/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:23:34 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/10 18:59:46 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *fmt, ...)
{
	va_list	args;
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
				ft_char(va_arg(args, int), ctr);
			}
			else if (*fmt == 's')
			{
				ft_str(va_arg(args, char *), ctr);
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
/* 	printf("Probando caracter %c \n", 'A');
	ft_printf("Probando caracter %c ", 'A'); */
/* 	printf("Probando string %s \n", "eeey klk pana");
	ft_printf("Probando string %s \n", "eeey klk pana"); */
/* 	printf("Probemos un %cix a ver %s o no %c \n", 'm', "k pasa", '?');
	ft_printf("Probemos un %cix a ver %s o no %c", 'm', "k pasa", '?'); */
	int	*ptr;
	int	a;

	a = 4;
	ptr = &a;
	printf("Direccion de memoria el puntero %p", ptr);
}
