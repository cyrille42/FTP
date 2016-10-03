/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 16:48:42 by cgay              #+#    #+#             */
/*   Updated: 2015/02/24 16:48:43 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	t = t + ft_strlen(s);
	while (*t != (char)c && t != s)
		t--;
	if (*t == (char)c)
		return ((char *)t);
	return (NULL);
}
