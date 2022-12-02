#include "get_next_line.h"
#include<stdio.h>

int	main()
{
	char	*l;
	int i = 0;
	int	fd = open("test.txt", O_RDONLY);
	while (i <= 10)
	{
		i++;
		l = get_next_line(fd);	
		printf("%s", l);
		free(l);
	}
}

