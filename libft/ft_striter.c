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

void ft_striter(char *s, void (*f)(char *))
{
	int a;
	int len;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen (s);
		a = 0;
		while (a < len)
		{
			(*f)(s);
			s++;
			a++;
		}
	}
}