#include "get_next_line.h"
#include<stdio.h>
int  print_newline(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		printf("%c",str[i]);
		if (str[i] == '\n')
		{
			printf("%c", str[i]);
			return (0);
		}
		i++;
	}
	return (0);
}
int	main()
{
	char	*l;
	char	*k;
	int	fd = open("txt.txt", O_RDONLY);
	l = get_next_line(fd);
	k = get_next_line(fd);
	printf("%s k: %s", l, k);
}
