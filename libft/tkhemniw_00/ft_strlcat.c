/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:33:47 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/08/27 16:47:36 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstw;
	size_t	srcw;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	dstw = ft_strlen(dst);
	srcw = 0;
	while (src[srcw] != '\0' && dstw < size - 1)
	{
		dst[dstw] = src[srcw];
		dstw++;
		srcw++;
	}
	dst[dstw] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[srcw]));
}
