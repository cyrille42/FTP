/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 17:50:52 by cgay              #+#    #+#             */
/*   Updated: 2015/02/23 17:50:53 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnclr(char *str, int n)
{
	char	*tmp;
	int		len;

	len = n;
	while (str[len])
		len++;
	tmp = (char *)malloc(sizeof(tmp) * len);
	len = 0;
	while (str[n])
		tmp[len++] = str[n++];
	return (tmp);
}
