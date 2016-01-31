/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:13:00 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/15 12:18:35 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		div;

	i = 0;
	div = 1;
	str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		str[i++] = (n / div) + 48;
		n %= div;
		div /= 10;
	}
	str[i] = '\0';
	return (str);
}
