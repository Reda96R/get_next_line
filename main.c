#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include<stdio.h>

int	main()
{
	char	*l;
	int i = 0;
	int	fd = open("test.txt", O_RDONLY);
	// while (i <= 10)
	// {
	// 	i++;
	// 	l = get_next_line(fd);	
	// 	printf("%s", l);
	// 	free(l);
	// }

	int	fd1 = open("test1.txt", O_RDONLY);
	char *k;
	while (i < 5)
	{
		i++;
		//l = get_next_line_bonus(fd);
		k = get_next_line_bonus(fd1);
		//printf("%s", l);
		printf("%s", k);
		free(k);
		//free(l);
	}
}

