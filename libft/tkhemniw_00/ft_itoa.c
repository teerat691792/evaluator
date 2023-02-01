/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:23:16 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/08/31 20:25:30 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	len(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*res;
	long	num;

	size = len(n);
	num = n;
	res = malloc(size + 1);
	if (!res)
		return (0);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	if (num == 0)
		res[0] = 48;
	res[size] = '\0';
	size--;
	while (num)
	{
		res[size] = (num % 10) + 48;
		num = num / 10;
		size--;
	}
	return (res);
}
