/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:59:36 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/11/08 20:07:50 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strjoin_and_free(const char *buffer, ssize_t	len_buffer, \
										char *temp, size_t *num_line_read);
char	*create_result(char *temp, char *buffer_static[10250], \
													ssize_t num_read, int fd);
void	ft_update_rest_and_temp(char *temp, \
						char *buffer_static[10250], int fd);
size_t	count_newline(char *str[10250], int fd);
void	ft_cat(char *dst, const char *src, size_t len_src);
int		my_free(char **p);

#endif
