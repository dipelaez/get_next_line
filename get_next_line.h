/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:56 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/15 12:52:23 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 42

char	*get_next_line(int fd);
char	*ft_strdup(const char	*s);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
size_t	ft_strlen(const char	*s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char	*s, int	c);
void	ft_strclr(char *s);
char	*ft_strcpy(char *dst, const char *src);

#endif
