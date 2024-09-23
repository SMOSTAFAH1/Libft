/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <shashemi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 09:41:19 by shashemi          #+#    #+#             */
/*   Updated: 2024-09-21 09:41:19 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	size = 1 + ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(size * sizeof(char));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s1, size);
	ft_strlcat(res, s2, size);
	return (res);
}
