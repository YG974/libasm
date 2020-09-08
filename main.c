#include "libasm.h"

void		ft_strlen_test(const char *s)
{
	size_t	d;

	d = strlen(s);
	printf("TEST OF FT_STRLEN\n");
	printf("- The input string is : '%s'\n", s);
	printf("1) lib.c strlen function output is: %lu\n", d);
	d = ft_strlen(s);
	printf("2) my ft_strlen function output is: %lu\n", d);
	return ;
}

void		ft_strcpy_test(char *d, const char *s)
{
	printf("TEST OF FT_STRCPY\n");
	printf("- The input string is : '%s'\n", s);
	d = strcpy(d, s);
	printf("1) lib.c strcpy function output is: %s\n", d);
	d = ft_strcpy(d, s);
	printf("2) my ft_strcpy function output is: %s\n", d);
}

void		ft_strcmp_test(const char *s1, const char *s2)
{
	int d;

	printf("TEST OF FT_STRCMP\n");
	printf("- The input string 1 is : '%s'\n", s1);
	printf("- The input string 2 is : '%s'\n", s2);
	d = strcmp(s1, s2);
	printf("1) lib.c strcmp function output is: %d\n", d);
	d = ft_strcmp(s1, s2);
	printf("2) my ft_strcmp function output is: %d\n", d);
}

int			main()
{
	char d[3000];
	char null[3000];

	null[0] = '\0';
	printf("----------------------------------------------------\n");
	printf("TEST OF MY LIBASM FUNCTIONS\n");
	printf("----------------------------------------------------\n");
	ft_strlen_test("salut les copains");
	printf("----------------------------------------------------\n");
	ft_strlen_test(null);
	printf("----------------------------------------------------\n");
	ft_strcpy_test(d,"salut les copains");
	printf("----------------------------------------------------\n");
	ft_strcpy_test(d, null);
	printf("----------------------------------------------------\n");
	ft_strcmp_test("salut les copains","salut les copains");
	printf("----------------------------------------------------\n");
	ft_strcmp_test("salut les","salut les copains");
	printf("----------------------------------------------------\n");
	ft_strcmp_test("salut les","sal");
	printf("----------------------------------------------------\n");
	ft_strcmp_test("salut les bogoss","salut les mitos");
	printf("----------------------------------------------------\n");
	ft_strcmp_test(null,"salut les mitos");
	printf("----------------------------------------------------\n");
	ft_strcmp_test("salut les mitos",null);
	printf("----------------------------------------------------\n");
	ft_strcmp_test(null, null);
	printf("----------------------------------------------------\n");
	return (0);
}
