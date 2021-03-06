/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <egrazina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:21:27 by egrazina          #+#    #+#             */
/*   Updated: 2021/04/07 15:02:38 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

size_t		ft_strlen(const char *s);
int			read_file(int fd, char **arr, char *buffer);
int			update_line(int fd, char **arr, char **line);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(char *s);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlcpy(char *dst, char *src, size_t size);
int			get_next_line(int fd, char **line);

#endif
