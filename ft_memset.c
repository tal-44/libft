/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:02:49 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/06 11:53:30 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		*c = (unsigned char)value;
		c++;
		i++;
	}
	return (ptr);
}
