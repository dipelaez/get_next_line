/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipelaez <dipelaez@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:29:56 by dipelaez          #+#    #+#             */
/*   Updated: 2021/09/27 17:06:01 by dipelaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef OPEN_MAX
# define OPEN_MAX 256
# endif

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif

/**
 * @brief Computes the lenght of the string up to, but not including the
 * terminating null character. Example: ft_strlen("1234") => 4
 * 
 * @param s This is the string whose lenght is to be found.
 * @return This function returns the lenght of string.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Search for the first occurrence of the character c
 * (unsigned char) in the string pointed to by the argument s.
 * The terminating null character is considered part of the string; Therefore
 * if c is \\0, the function locate the terminating \\0.
 * 
 * @param s This is the C string to be scanned.
 * @param c This is the character to be located. Its passed as int,
 * but is converted internally to char.
 * @return This returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char	ft_strchr(const char *s, int c);

/**
 * @brief Returns a pointer to a null-terminated byte string, which is a
 * duplicate of the string pointed by str. The returned pointer must be
 * passed to free to avoid memory leak. If an error occurs, a null pointer 
 * is returned.
 * @param str Pointer to the null-terminated byte string to duplicate.
 * @return A pointer to the newly allocated string, or a null pointer
 * if an error occurred.
 */
char	*ft_strdup(const char *str);

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of 's1' and 's2'.
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 * 's'. The substring begins at index 'start' and is of maximum size 'len'.
 * @param s The string from which to vreate the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum lenght of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Reads a line from a file descriptor.
 * @param fd File descriptor to read.
 * @return Return a string including \\n, if is a line. In case of the file
 * dont have \\n return a string without \\n, NULL if the file is empty
 * or an error occurs.
 */
char	*get_next_line(int fd);

#endif