/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:28:08 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/01 12:42:01 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memmove(void *dest, const void *src, size_t n)
{
    char    *d;
    const char    *s;
    int i;

    if (dest == NULL && src == NULL)
            return NULL;
    d = dest;
    s = src;
    if (d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
        
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}