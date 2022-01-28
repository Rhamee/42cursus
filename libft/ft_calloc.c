/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:54:40 by hrha              #+#    #+#             */
/*   Updated: 2022/01/28 16:54:40 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}

void *ft_calloc(size_t nmemb, size_t size)
{
	char	*result;

	result = (char	*)malloc(size * nmemb);
	if (!result)
		return (NULL);
	bzero(result, sizeof(result));
	return (result);
}