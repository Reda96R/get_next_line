#include "get_next_line.h"
#include<stdio.h>

int	main()
{
	char	*l;
	char	*k;
	char	*m;
	int	fd = open("txt.txt", O_RDONLY);
	l = get_next_line(fd);
	k = get_next_line(fd);
	m = get_next_line(fd);
	printf("%s", l);
	printf("%s", k);
	printf("%s", m);
}
