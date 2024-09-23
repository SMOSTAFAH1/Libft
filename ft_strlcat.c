/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <shashemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:30:02 by shashemi          #+#    #+#             */
/*   Updated: 2024/09/18 09:30:03 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (src[i] && (len_d + i) < (size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = 0;
	return (len_d + len_s);
}
