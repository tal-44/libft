/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:45:51 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/04 19:37:02 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*get_lens(char const *s, char c)
{
	int	*lens;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			lens[j] = k;
			j++;
			k = 0;
		}
		k++;
		i++;
	}
	lens[i] = 1;
	return (lens);
}

char	**create_strs(s, c)
{
	char	**strs;
	int		*lens;
	int		i;

	lens = get_lens(s, c);
	strs = malloc((ft_strlen(lens)) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (strs[i])
	{
		strs[i] = malloc(lens[i] * sizeof(char));
		if (!strs[i])
			return (NULL);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	strs = create_strs(s, c);
	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			j++;
			k = 0;
		}
		else
		{
			strs[j][k] = s[i];
			i++;
			k++;
		}
	}
	strs[j][0] = "\0";
	return (strs);
}
