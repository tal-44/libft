#include "libft.h"

void	test_ft_atoi(void)
{
	printf("ft_atoi(\"123\") = %d\n", ft_atoi("123"));
	printf("ft_atoi(\"   -42\") = %d\n", ft_atoi("   -42"));
	printf("ft_atoi(\"0\") = %d\n", ft_atoi("0"));
}
void	test_ft_calloc(void)
{
	int	*arr;

	arr = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}
void	test_ft_itoa(void)
{
	char	*s;

	s = ft_itoa(-12345);
	printf("ft_itoa(-12345) = %s\n", s);
	free(s);
}
void	test_ft_split(void)
{
	char	**tab;

	tab = ft_split("hola,mundo,42", ',');
	for (int i = 0; tab[i]; i++)
		printf("tab[%d]: %s\n", i, tab[i]);
	for (int i = 0; tab[i]; i++)
		free(tab[i]);
	free(tab);
}
void	test_ft_strjoin(void)
{
	char	*s;

	s = ft_strjoin("hola", " mundo");
	printf("ft_strjoin: %s\n", s);
	free(s);
}
void	test_ft_strtrim(void)
{
	char	*trimmed;

	trimmed = ft_strtrim("  42madrid  ", " ");
	printf("ft_strtrim: '%s'\n", trimmed);
	free(trimmed);
}
void	test_ft_substr(void)
{
	char	*sub;

	sub = ft_substr("hola mundo", 5, 5);
	printf("ft_substr: '%s'\n", sub);
	free(sub);
}
void	test_ft_lstadd_back_bonus(void)
{
	t_list	*lst;
	t_list	*nuevo;

	lst = ft_lstnew("primero");
	nuevo = ft_lstnew("segundo");
	ft_lstadd_back(&lst, nuevo);
	for (t_list *tmp = lst; tmp; tmp = tmp->next)
		printf("Lista: %s\n", (char *)tmp->content);
	ft_lstclear(&lst, NULL);
}

void	test_ft_memcpy_memmove(void)
{
	char	src[] = "abcdef";
	char	dest[10];
	char	buf[] = "123456";

	ft_memcpy(dest, src, 6);
	printf("ft_memcpy: %s\n", dest);
	ft_memmove(buf + 2, buf, 4);
	printf("ft_memmove: %s\n", buf);
}
void	test_ft_strlcpy_strlcat(void)
{
	char	dest[12];

	ft_strlcpy(dest, "hola", 12);
	printf("ft_strlcpy: %s\n", dest);
	ft_strlcat(dest, " mundo", 12);
	printf("ft_strlcat: %s\n", dest);
}
char	add_index(unsigned int i, char c)
{
	return (c + i);
}
void	print_index(unsigned int i, char *c)
{
	printf("%u:%c ", i, *c);
}
void	test_ft_strmapi_striteri(void)
{
	char	*res;
	char	str[] = "hola";

	res = ft_strmapi("hola", add_index);
	printf("ft_strmapi: %s\n", res);
	free(res);
	ft_striteri(str, print_index);
	printf("\n");
}
void	test_charfuncs(void)
{
	printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
}
void	test_putfuncs(void)
{
	printf("ft_putchar_fd: ");
	ft_putchar_fd('A', 1);
	printf("\n");
	printf("ft_putstr_fd: ");
	ft_putstr_fd("Hola", 1);
	printf("\n");
	printf("ft_putendl_fd: ");
	ft_putendl_fd("Hola", 1);
	printf("ft_putnbr_fd: ");
	ft_putnbr_fd(42, 1);
	printf("\n");
}
void	test_ft_strdup(void)
{
	char	*dup;

	dup = ft_strdup("Hola");
	printf("ft_strdup: %s\n", dup);
	free(dup);
}
void	test_strchr_strrchr(void)
{
	printf("ft_strchr: %s\n", ft_strchr("Hola", 'l'));
	printf("ft_strrchr: %s\n", ft_strrchr("Hola", 'l'));
}
void	test_strncmp_strnstr(void)
{
	printf("ft_strncmp: %d\n", ft_strncmp("Hola", "Holb", 4));
	printf("ft_strnstr: %s\n", ft_strnstr("Hola mundo", "mun", 10));
}
void	test_ft_strlen(void)
{
	printf("ft_strlen: %zu\n", ft_strlen("Hola"));
}
void	test_memfuncs(void)
{
	char	bzero_buf[6] = "Hola!";
	char	memset_buf[6] = "Hola!";

	ft_bzero(bzero_buf, 5);
	printf("ft_bzero: '%s'\n", bzero_buf);
	ft_memset(memset_buf, 'A', 5);
	printf("ft_memset: %s\n", memset_buf);
	printf("ft_memcmp: %d\n", ft_memcmp("Hola", "Holb", 4));
	printf("ft_memchr: %s\n", (char *)ft_memchr("Hola", 'l', 4));
}
int	main(void)
{
	test_ft_atoi();
	test_ft_calloc();
	test_ft_itoa();
	test_ft_split();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_substr();
	test_ft_lstadd_back_bonus();
	test_ft_memcpy_memmove();
	test_ft_strlcpy_strlcat();
	test_ft_strmapi_striteri();
	test_charfuncs();
	test_putfuncs();
	test_ft_strdup();
	test_strchr_strrchr();
	test_strncmp_strnstr();
	test_ft_strlen();
	test_memfuncs();
	return (0);
}
