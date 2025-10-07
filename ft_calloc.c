/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:09:24 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/07 11:34:43 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	bytes;

	bytes = count * size;
	str = (void *)malloc(bytes);
	if (!str)
		return (NULL);
	ft_bzero(str, bytes);
	return (str);
}

/*
str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
*/