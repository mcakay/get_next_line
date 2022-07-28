/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 07:13:59 by mcakay            #+#    #+#             */
/*   Updated: 2022/07/28 12:58:00 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_n(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_get_line(char *str);
char	*ft_update_str(char *str);
char	*get_next_line(int fd);
#endif