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

int			main()
{
	printf("----------------------------------------------------\n");
	printf("TEST OF MY LIBASM FUNCTIONS\n");
	printf("----------------------------------------------------\n");
	ft_strlen_test("salut les copains");
	printf("----------------------------------------------------\n");
	return (0);
}
