/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:52:10 by marvin            #+#    #+#             */
/*   Updated: 2022/11/30 16:11:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_fill(char *stock, int fd)
{
    int     i;
    char    *str;

    str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!str)
        return (NULL);
    i = 1;
    while (i > 0 && !ft_strchr(stock, '\n'))
    {
        i = read(fd, str, BUFFER_SIZE);
        if (i < 0)
        {
            free (str);
            return (NULL);
        }
        str[i] = '\0';
        stock = ft_strjoin(stock, str);
    }
    //printf("test%s\n", stock);
    free(str);
    return (stock);
}

char    *get_next_line(int fd)
{
    char    *str;
    static char *stock;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    stock = ft_fill(stock, fd);
    if (!stock)
        return (NULL);
    str = ft_line(stock);
    free(stock);
    stock = NULL;
    return (str);
}
