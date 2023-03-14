/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:33:53 by dbui              #+#    #+#             */
/*   Updated: 2023/03/14 20:28:50 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			p = (char *)&s[len];
			return ((char *)p);
		}
		len--;
	}
	return (0);
}