/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:22:44 by cgay              #+#    #+#             */
/*   Updated: 2015/02/23 18:22:48 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char			*alc;

	alc = malloc(sizeof(*alc) * (size + 1));
	if (alc == NULL)
		return ((char *)NULL);
	return (alc);
}
