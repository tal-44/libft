/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:16:23 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/01 12:34:32 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *d;
    const char    *s;
    int i;

    if (dest == NULL && src == NULL)
            return NULL;
    d = dest;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}