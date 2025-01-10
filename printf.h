/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:59:56 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/10 18:38:18 by mariorte         ###   ########.fr       */
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

#endif