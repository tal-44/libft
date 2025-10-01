/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:02:49 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/01 12:07:36 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memset(void *ptr, int value, size_t len)
{
    char    *c;
    int     i;

    i = 0;
    while (i < len)
    {
        *c = value;
        c++;
        i++;
    }
    return (b);
}