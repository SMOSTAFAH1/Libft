/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <shashemi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 09:41:15 by shashemi          #+#    #+#             */
/*   Updated: 2024-09-21 09:41:15 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	set_contains(char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (set_contains(*(s1 + i), set))
		i++;
	j = ft_strlen(s1) - 1;
	while (set_contains(*(s1 + j), set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	res = ft_substr(s1, i, (j - i + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}
