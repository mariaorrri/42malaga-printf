/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariorte <mariorte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:02:12 by mariorte          #+#    #+#             */
/*   Updated: 2025/01/10 19:07:11 by mariorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pointer(void *ptr, int ctr)
{
	char	*dir;
	int 	i;
	
	*dir = &ptr;
	i = 0;
	while (dir[i] != 0)
	{
		write(1, &dir[i], 1);
		i++;
		ctr++;
	}
}
