/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:09:24 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/09 11:54:39 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	bytes;

	/*
		if (count == 0 || size == 0)
		{
			return ;
		}
			If nmemb or size is 0, then calloc() returns a unique
	pointer value that can be successfully passed to	free(void).
	*/
	bytes = count * size;
	str = (void *)malloc(bytes);
	if (!str)
		return (NULL);
	ft_bzero(str, bytes);
	return (str);
}

/*

extern "C"
{
#define new tripouille
#include "libft.h"
#undef new
}

#include "check.hpp"
#include "leaks.hpp"
#include "sigsegv.hpp"
#include <limits.h>
#include <stdint.h>
#include <string.h>

int		iTest = 1;
int	main(void)
{
	char	e[] = {0, 0, 0, 0};

	signal(SIGSEGV, sigsegv);
	title("ft_calloc\t: ")
	void * p = ft_calloc(2, 2);
	/* 1 */
check(!memcmp(p, e, 4));
/* 2 */ mcheck(p, 4);
free(p);
showLeaks();
/* 3 */ check(ft_calloc(SIZE_MAX, SIZE_MAX) == NULL);
showLeaks();
/* @evportel */
/* The following tests are not supported by the function's documentation.
 * But some effects returned in the trait by Moulinette so the following
 * tests were implemented. */
/* 4 */ check(ft_calloc(INT_MAX, INT_MAX) == NULL);
/* 5 */ check(ft_calloc(INT_MIN, INT_MIN) == NULL);
showLeaks();
p = ft_calloc(0, 0);
/* 6 */ check(p != NULL);
free(p);
showLeaks();
p = ft_calloc(0, 5);
/* 7 */ check(p != NULL);
free(p);
showLeaks();
p = ft_calloc(5, 0);
/* 8 */ check(p != NULL);
free(p);
showLeaks();
/* 9 */ check(ft_calloc(-5, -5) == NULL);
showLeaks();
p = ft_calloc(0, -5);
/* 10 */ check(p != NULL);
free(p);
showLeaks();
p = ft_calloc(-5, 0);
/* 11 */ check(p != NULL);
free(p);
showLeaks();
/* 12 */ check(ft_calloc(3, -5) == NULL);
showLeaks();
/* 13 */ check(ft_calloc(-5, 3) == NULL);
showLeaks();
write(1, "\n", 1);
return (0);
}

ft_calloc : 1.OK 2.MOK 3.KO 4.OK 5.OK 6.OK 7.OK 8.OK 9.KO 10.OK 11.OK == 2317871 ==
	Argument 'size' of function malloc has a fishy(possibly negative) value
	: -15 == 2317871 == at 0x4848899 : malloc(in / usr / libexec / valgrind
			/ vgpreload_memcheck - amd64
			- linux.so) == 2317871 == by 0x404C55 : ft_calloc(in / home
			/ jmiguele / libftTester
			/ a.out) == 2317871 == by 0x404B4E : main(ft_calloc_test.cpp : 44) == 2317871 == 12.OK == 2317871 == Argument 'size' of function malloc has a fishy(possibly negative) value :
		-15 == 2317871 == at 0x4848899 : malloc(in / usr / libexec / valgrind
			/ vgpreload_memcheck - amd64
			- linux.so) == 2317871 == by 0x404C55 : ft_calloc(in / home
			/ jmiguele / libftTester
			/ a.out) == 2317871 == by 0x404B76 : main(ft_calloc_test.cpp : 45) == 2317871 == 13.OK == 2317871 == 1 bytes in 1 blocks are definitely lost in loss record 1 of 2 ==
																																																																																																																																																			2317871 == at 0x4848899 : malloc(in
																																																																																																																																																					/ usr
																																																																																																																																																					/ libexec
																																																																																																																																																					/ valgrind
																																																																																																																																																					/ vgpreload_memcheck
																																																																																																																																																					- amd64
																																																																																																																																																					- linux.so) == 2317871 == by 0x404C55 : ft_calloc(in
																																																																																																																																																					/ home
																																																																																																																																																					/ jmiguele
																																																																																																																																																					/ libftTester
																																																																																																																																																					/ a.out) == 2317871 == by 0x40498D : main(ft_calloc_test.cpp : 25) == 2317871 == == 2317871 == 25 bytes in 1 blocks are definitely lost in loss record 2 of 2 ==
																																																																																																																																																																																																								2317871 == at 0x4848899 : malloc(in
																																																																																																																																																																																																										/ usr
																																																																																																																																																																																																										/ libexec
																																																																																																																																																																																																										/ valgrind
																																																																																																																																																																																																										/ vgpreload_memcheck
																																																																																																																																																																																																										- amd64
																																																																																																																																																																																																										- linux.so) == 2317871 == by 0x404C55 : ft_calloc(in
																																																																																																																																																																																																										/ home
																																																																																																																																																																																																										/ jmiguele
																																																																																																																																																																																																										/ libftTester
																																																																																																																																																																																																										/ a.out) ==
																																																																																																																																																																																																																																									2317871 == by 0x404AAA : main(ft_calloc_test.cpp : 39) == 2317871 ==

																																																																																																																																																																																																																																																*
																																																																																																																																																																																																																																																	/