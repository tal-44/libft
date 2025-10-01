/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 09:54:58 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/01 10:34:43 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlcat(char *dest, char *src, size_t size)
{
	int	i;
    int len;

	i = 0;
    len = ft_strlen(dest);
	if (size == 0)
		return (0);
	while (src[i] && len + i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (ft_strlen(dest));
}