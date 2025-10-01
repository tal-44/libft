/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:50:16 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/01 13:01:07 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i > 0)
    {  
        i--;
        if (s[i] == c)
            return &s[i];
    }
    return NULL;
}