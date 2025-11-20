/* ************************************************************************** */
/*                                                                            */
/*   test_libft.c - Complete test suite for libft                            */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

void test_isalpha(void)
{
	printf("Testing ft_isalpha...\n");
	assert(!!ft_isalpha('a') == !!isalpha('a'));
	assert(!!ft_isalpha('Z') == !!isalpha('Z'));
	assert(!!ft_isalpha('1') == !!isalpha('1'));
	assert(!!ft_isalpha(' ') == !!isalpha(' '));
	printf("✓ ft_isalpha passed\n");
}

void test_isdigit(void)
{
	printf("Testing ft_isdigit...\n");
	assert(!!ft_isdigit('0') == !!isdigit('0'));
	assert(!!ft_isdigit('9') == !!isdigit('9'));
	assert(!!ft_isdigit('a') == !!isdigit('a'));
	printf("✓ ft_isdigit passed\n");
}

void test_strlen(void)
{
	printf("Testing ft_strlen...\n");
	assert(ft_strlen("Hello") == strlen("Hello"));
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("42") == strlen("42"));
	printf("✓ ft_strlen passed\n");
}

void test_strdup(void)
{
	char *s1, *s2;
	printf("Testing ft_strdup...\n");
	s1 = ft_strdup("Hello World");
	s2 = strdup("Hello World");
	assert(strcmp(s1, s2) == 0);
	free(s1);
	free(s2);
	printf("✓ ft_strdup passed\n");
}

void test_substr(void)
{
	char *result;
	printf("Testing ft_substr...\n");
	result = ft_substr("Hello World", 6, 5);
	assert(strcmp(result, "World") == 0);
	free(result);
	result = ft_substr("42", 0, 10);
	assert(strcmp(result, "42") == 0);
	free(result);
	printf("✓ ft_substr passed\n");
}

void test_strjoin(void)
{
	char *result;
	printf("Testing ft_strjoin...\n");
	result = ft_strjoin("Hello ", "World");
	assert(strcmp(result, "Hello World") == 0);
	free(result);
	result = ft_strjoin("", "42");
	assert(strcmp(result, "42") == 0);
	free(result);
	printf("✓ ft_strjoin passed\n");
}

void test_split(void)
{
	char **result;
	int i;
	printf("Testing ft_split...\n");
	result = ft_split("Hello World 42", ' ');
	assert(strcmp(result[0], "Hello") == 0);
	assert(strcmp(result[1], "World") == 0);
	assert(strcmp(result[2], "42") == 0);
	assert(result[3] == NULL);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	printf("✓ ft_split passed\n");
}

void test_itoa(void)
{
	char *result;
	printf("Testing ft_itoa...\n");
	result = ft_itoa(42);
	assert(strcmp(result, "42") == 0);
	free(result);
	result = ft_itoa(-2147483648);
	assert(strcmp(result, "-2147483648") == 0);
	free(result);
	result = ft_itoa(0);
	assert(strcmp(result, "0") == 0);
	free(result);
	printf("✓ ft_itoa passed\n");
}

void test_calloc(void)
{
	char *ptr;
	int i;
	printf("Testing ft_calloc...\n");
	ptr = (char *)ft_calloc(10, sizeof(char));
	for (i = 0; i < 10; i++)
		assert(ptr[i] == 0);
	free(ptr);
	printf("✓ ft_calloc passed\n");
}

void test_lstnew(void)
{
	t_list *node;
	char *content = "42";
	printf("Testing ft_lstnew...\n");
	node = ft_lstnew(content);
	assert(node != NULL);
	assert(node->content == content);
	assert(node->next == NULL);
	free(node);
	printf("✓ ft_lstnew passed\n");
}

void test_lstadd_front(void)
{
	t_list *lst = NULL;
	t_list *new;
	printf("Testing ft_lstadd_front...\n");
	new = ft_lstnew("World");
	ft_lstadd_front(&lst, new);
	new = ft_lstnew("Hello");
	ft_lstadd_front(&lst, new);
	assert(strcmp((char *)lst->content, "Hello") == 0);
	assert(strcmp((char *)lst->next->content, "World") == 0);
	free(lst->next);
	free(lst);
	printf("✓ ft_lstadd_front passed\n");
}

void test_lstsize(void)
{
	t_list *lst = NULL;
	t_list *new;
	printf("Testing ft_lstsize...\n");
	assert(ft_lstsize(lst) == 0);
	new = ft_lstnew("1");
	ft_lstadd_front(&lst, new);
	new = ft_lstnew("2");
	ft_lstadd_front(&lst, new);
	assert(ft_lstsize(lst) == 2);
	free(lst->next);
	free(lst);
	printf("✓ ft_lstsize passed\n");
}

void test_printf(void)
{
	int ret1, ret2;
	printf("Testing ft_printf...\n");
	
	ret1 = ft_printf("Test string: %s\n", "Hello");
	ret2 = printf("Test string: %s\n", "Hello");
	assert(ret1 == ret2);
	
	ret1 = ft_printf("Test int: %d\n", 42);
	ret2 = printf("Test int: %d\n", 42);
	assert(ret1 == ret2);
	
	ret1 = ft_printf("Test hex: %x\n", 255);
	ret2 = printf("Test hex: %x\n", 255);
	assert(ret1 == ret2);
	
	ret1 = ft_printf("Test char: %c\n", 'A');
	ret2 = printf("Test char: %c\n", 'A');
	assert(ret1 == ret2);
	
	printf("✓ ft_printf passed\n");
}

int main(void)
{
	printf("========================================\n");
	printf("     LIBFT COMPREHENSIVE TEST SUITE     \n");
	printf("========================================\n\n");

	test_isalpha();
	test_isdigit();
	test_strlen();
	test_strdup();
	test_substr();
	test_strjoin();
	test_split();
	test_itoa();
	test_calloc();
	test_lstnew();
	test_lstadd_front();
	test_lstsize();
	test_printf();

	printf("\n========================================\n");
	printf("     ALL TESTS PASSED! ✓                \n");
	printf("========================================\n");

	return (0);
}
