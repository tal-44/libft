/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:07:26 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/04 19:44:13 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_intarray(const int *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_arraybi(const char **str)
{
	int	i;

	i = 0;
	while (str[i][0])
		i++;
	return (i);
}

int	ft_strlen_num(int count, int n)
{
	if (n < 0)
		return (ft_strlen_num(count++, n *= -1));
	if (n > 9)
		return (ft_strlen_num(count++, n /= 10));
	return (count++);
}
