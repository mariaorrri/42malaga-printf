/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:18:47 by mariorte          #+#    #+#             */
/*   Updated: 2024/12/26 11:47:32 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	aux;

	aux = c;
	while (*s)
	{
		if (aux == *s)
			return ((char *)s);
		s++;
	}
	if (aux == 0)
		return ((char *)s);
	return (0);
}
