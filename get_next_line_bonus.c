/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 07:13:35 by mcakay            #+#    #+#             */
/*   Updated: 2022/07/28 14:19:25 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *str)
{
	int		rd;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd = 1;
	while (!ft_n(str) && rd != 0)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(str);
			free(buff);
			return (NULL);
		}
		*(buff + rd) = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*strs[256];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	strs[fd] = ft_read(fd, strs[fd]);
	if (!strs[fd])
		return (NULL);
	line = ft_get_line(strs[fd]);
	strs[fd] = ft_update_str(strs[fd]);
	return (line);
}
