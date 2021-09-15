/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:42 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/15 13:03:01 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*check_remainder(char *remainder, char **line)
{
	char	*p_n;

	p_n = NULL;
	if (remainder)
		if ((p_n = ft_strchr(remainder, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(remainder);
			ft_strcpy(remainder, ++p_n);
		}
		else
		{
			*line = ft_strdup(remainder);
			ft_strclr(remainder);
		}
	else
		*line = ft_strnew(1);
	return (p_n);
}

char	*get_next_line(int fd)
{
	static char		*remainder;
	char			buf[BUFFER_SIZE + 1];
	char			*line;
	char			*p_n;
	int				byte_was_read;
	char			*tmp;

	p_n = check_remainder(remainder, &line);
	while (!p_n && (byte_was_read = read(fd, buf, BUFFER_SIZE)))
	{
		buf[byte_was_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			p_n++;
			remainder = ft_strdup(p_n);
		}
		tmp = line;
		line = ft_strjoin(line, buf);
		free(tmp);
	}
	printf("%s\n",line);
	return (0);	// byte_was_read != 0, remainder lenght != 0, line lenght != 0
}

int	main(void)
{
	int		fd;

	fd = open("text.txt", O_RDONLY);
	
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	
}
