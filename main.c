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
	return (0);
}
