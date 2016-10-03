/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 17:47:29 by cgay              #+#    #+#             */
/*   Updated: 2015/02/23 17:49:14 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabcpy(char **tab)
{
	int		i;
	char	**ret;

	i = 0;
	while (tab[i])
		i++;
	ret = (char **)malloc(sizeof(ret) * (i + 1));
	ret[i + 1] = NULL;
	i = 0;
	while (tab[i])
	{
		ret[i] = (char *)malloc(sizeof(ret[i]) * ((ft_strlen(tab[i]) + 1)));
		ft_bzero(ret[i], ft_strlen(tab[i]) + 1);
		ft_strcpy(ret[i], tab[i]);
		i++;
	}
	return (tab);
}
