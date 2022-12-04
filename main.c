#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include<stdio.h>

int	main()
{
	//char	*l;
	int i = 0;
	char	*l = "";
	char	*k = "";
	int	fd = open("get_next_line.c", O_RDONLY);
	int	fd1 = open("get_next_line_bonus.c", O_RDONLY);
	while (l || k)
	{
		l = get_next_line(fd);	
		k = get_next_line(fd1);
		printf("%s", l);
		printf("%s", k);
		free(l);
		free(k);
	}
	// int	fd1 = open("test1.txt", O_RDONLY);
	// char *k;
	// while (i < 5)
	// {
	// 	i++;
	// 	//l = get_next_line_bonus(fd);
	// 	k = get_next_line_bonus(fd1);
	// 	//printf("%s", l);
	// 	printf("%s", k);
	// 	free(k);
	// 	//free(l);
	// }
	close(fd);
	close(fd1);
}

