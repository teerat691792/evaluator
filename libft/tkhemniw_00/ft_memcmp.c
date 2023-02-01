/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:03:32 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/08/27 16:57:36 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return ((int)(((unsigned char *)str1)[i]
			- ((unsigned char *)str2)[i]));
		i++;
	}
	return (0);
}
