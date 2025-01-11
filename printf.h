/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:59:56 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/11 10:06:47 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Define todas las funciones y estructuras necesarias
#ifndef PRINTF_H
# define PRINTF_H
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *fmt, ...);
void	ft_char(int c, int ctr);
void	ft_str(char *str, int ctr);
void	ft_putchar(char c, int ctr);
void	ft_dectohex(int nbr, int ctr);
void	ft_pointer(void *ptr, int ctr);

#endif