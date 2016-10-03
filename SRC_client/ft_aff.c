/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 00:14:54 by cgay              #+#    #+#             */
/*   Updated: 2015/04/29 00:14:57 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDE/client.h"

void		ft_aff(int sock)
{
	int		size;
	char	buf[1024];

	while ((size = recv(sock, buf, sizeof(buf), 0)) > 0)
	{
		if (!ft_strcmp(buf, "END;"))
			break ;
		write (1, buf, ft_strlen(buf));
		ft_memset(buf, 0, 1024);
		send(sock, "OK;", ft_strlen("OK;"), 0);
	}
	success("Requete executer");
}
