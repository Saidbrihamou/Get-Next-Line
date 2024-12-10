/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:50:56 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/11/09 10:11:17 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strjoin_and_free(const char *buffer, ssize_t	len_buffer, \
										char *temp, size_t *num_line_read);
char	*create_result(char *temp, char **buff_static, size_t *line_read, \
													ssize_t num_read);
void	ft_update_rest_and_temp(char *temp, char *buff_static, \
													size_t *num_line_read);
size_t	count_newline(const char *str);
void	ft_cat(char *dst, const char *src, size_t len_src);
int		my_free(char **p);

#endif
