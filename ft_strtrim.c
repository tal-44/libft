/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:58:09 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/04 19:37:02 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_start(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				j = -1;
			else
				j++;
		}
		if (j < 0)
		{
			i++;
			continue ;
		}
		else
			break ;
	}
	return (i);
}

char	*get_end(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				j = -1;
			else
				j++;
		}
		if (j < 0)
		{
			i--;
			continue ;
		}
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	start = get_start(s1, set);
	end = get_end(s1, set);
	str = malloc((ft_strlen(s1) - start - end) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	return (str);
}
