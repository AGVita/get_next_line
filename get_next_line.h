/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 03:22:58 by rzarquon          #+#    #+#             */
/*   Updated: 2021/12/18 05:18:55 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strjoin(char	*s1, char	*s2);
size_t	ft_strlen(char	*s);
char	*ft_strchr(char	*s, int	c);
char	*get_next_line(int fd);

#endif