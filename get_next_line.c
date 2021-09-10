/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:42 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/10 11:51:36 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd) // 1 , 0 , -1
{
	char	buf[10 + 1];
	char	*line;
	char	*p_n;
	int		byte_was_read;
	int		flag;

	flag = 1;
	line = ft_strnew(1);
	while (flag && (byte_was_read = read(fd, buf, 10)))
	{
		buf[byte_was_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			flag = 0;
		}
		line = ft_strjoin(line, buf);
	}
	printf("%s\n", line);
	return (0);	
}

int	main(void)
{
	int		fd;

	fd = open("text.txt", O_RDONLY);
	
	get_next_line(fd);
}
