#include "main.h"



int (*get_print_cases(char *arg))(va_list, char *, int)
{
	int i = 0;
	print_cases formats[] = {
		{"c", c_case},
		{"s", s_case},
		{"%", perc_case},
		{"d", dec_case},
		{"i", dec_case},
		};

	while (i < 5)
	{
		if (*arg == *(formats[i]).pfcase)
			return ((formats[i].convfun));
		i++;
	}
	return (NULL);
}
