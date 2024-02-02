#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	char*	yom = NULL;

	ft_printf("YomBenHohoho");
	printf("%s hohoho", yom);
	ft_printf("%s hohoho", yom);
}
