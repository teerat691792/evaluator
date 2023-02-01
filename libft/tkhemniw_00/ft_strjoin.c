/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strjoin.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tkhemniw <gt.khemniwat@gmail.com>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/08/29 20:14:41 by tkhemniw		  #+#	#+#			 */
/*   Updated: 2022/08/29 20:47:34 by tkhemniw		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*rstr;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	rstr = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (rstr);
}
/*
int main()
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	printf("%s\n",ft_strjoin(s1,s2));
}*/