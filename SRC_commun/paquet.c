/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paquet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 00:15:43 by cgay              #+#    #+#             */
/*   Updated: 2015/04/29 00:15:43 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDE/paquet.h"

void	init_paquet(t_list *paquet)
{
	paquet->put = 0;
	paquet->get = 0;
}

void	read_paquet(t_list *paquet, char *str)
{
	if (ft_strncmp(str, "put ", 4) == 0)
		paquet->put = 1;
	else if (ft_strncmp(str, "get ", 4) == 0)
		paquet->get = 1;
	else if (ft_strncmp(ft_strtrim(str), "cd ", 3) == 0
		|| ft_strcmp(ft_strtrim(str), "cd..") == 0)
		success("Path changer");
	else
		error("Command not found", 0);
}

int		check_fichier(char *str)
{
	int i;
	int fd;

	i = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (-1);
	else
	{
		i = 0;
		while (str[i])
			i++;
	}
	close(fd);
	return (i);
}

char	*nom_fichier(char *str)
{
	return (str + 4);
}

char	*clearstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	str[i] = '\0';
	return (str);
}
