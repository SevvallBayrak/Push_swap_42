/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:58:15 by sbayrak           #+#    #+#             */
/*   Updated: 2024/10/17 17:48:32 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nmb;
	int		len;

	nmb = n;
	len = ft_length(nmb);
	if (n < 0)
		nmb = -nmb;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (nmb % 10) + '0';
		nmb = nmb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
