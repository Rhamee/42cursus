/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:15:56 by hrha              #+#    #+#             */
/*   Updated: 2022/02/03 16:25:35 by hrha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = i;
	if (dstsize > j + 1)
	{
		while (i < dstsize - 1 && src[i - j])
		{
			dst[i] = src[i - j];
			i++;
		}
		dst[i] = 0;
	}
	if (dstsize <= j)
		j = dstsize;
	return (j + ft_strlen(src));
}
