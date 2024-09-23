/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <shashemi@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 09:41:42 by shashemi          #+#    #+#             */
/*   Updated: 2024-09-21 09:41:42 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numstrlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n > 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*res;
	int			i;

	num = n;
	i = numstrlen((long int) n);
	res = (char *) malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	if (num < 0)
	{
		*res = '-';
		num *= -1;
	}
	if (num == 0)
		*res = '0';
	while (num > 0)
	{
		res[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
