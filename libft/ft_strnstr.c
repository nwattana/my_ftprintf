/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:08:37 by nwattana          #+#    #+#             */
/*   Updated: 2022/03/03 18:35:06 by nwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	iter;
	size_t	n_size;
	size_t	h_size;
	char	*c;

	h_size = ft_strlen(haystack);
	n_size = ft_strlen(needle);
	c = (char *)haystack;
	iter = 0;
	if (n_size <= 0)
		return ((char *)(haystack));
	if (n_size > len)
		return (0);
	while (*c != '\0' && len > 0 && iter + n_size <= len)
	{
		if (ft_strncmp(c, needle, n_size) == 0)
		{
			return ((char *)(c));
		}
		iter++;
		c++;
	}
	return (0);
}
