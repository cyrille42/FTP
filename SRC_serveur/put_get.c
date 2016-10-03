/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 00:16:17 by cgay              #+#    #+#             */
/*   Updated: 2015/05/02 09:33:33 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDE/paquet.h"
#include "../INCLUDE/serveur.h"

void	ft_get(int cs, char *buf, t_list *paquet)
{
	int			len;
	char		*str;

	str = nom_fichier(buf);
	str = clearstr(ft_strdup(str));
	len = check_fichier(ft_strdup(str));
	if (len == -1)
	{
		error("Can't find file", 0);
		send(cs, "ERROR;", ft_strlen("ERROR;"), 0);
	}
	else
	{
		send(cs, str, ft_strlen(str), 0);
		ft_memset(buf, 0, 1024);
		recv(cs, buf, sizeof(buf), 0);
		if (ft_strcmp(buf, "ERROR;") == 0)
			error("File already exist", 0);
		else if (ft_strcmp(buf, "FCREE;") == 0)
			envoie_fichier_to_client(str, cs);
	}
	paquet->get = 0;
}

void	ft_put(int cs, char *buf, t_list *paquet)
{
	int		fd;

	ft_memset(buf, 0, 1024);
	recv(cs, buf, sizeof(buf), 0);
	if (ft_strcmp(buf, "ERROR;") == 0)
		error("File doesn't exist", 0);
	else
	{
		fd = open(buf, O_RDWR | O_CREAT, 0775);
		if (fd == -1)
		{
			error("File already exist", 0);
			send(cs, "ERROR;", ft_strlen("ERROR;"), 0);
		}
		else
		{
			send(cs, "FCREE;", ft_strlen("FCREE;"), 0);
			get_file(cs, fd);
			close(fd);
		}
	}
	paquet->put = 0;
}
