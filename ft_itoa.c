/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:25:22 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/04 19:37:02 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(ft_strlen_num(0, n) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = "-";
	i = 0;
	while (i < ft_strlen(str))
	{
		if (i == ft_strlen(str) - 1 && n < 0)
			break ;
		str[ft_strlen(str) - i - 1] = (char)(n % 10);
		n /= 10;
		i++;
	}
	return (str);
}
