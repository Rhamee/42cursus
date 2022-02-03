/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:55:30 by hrha              #+#    #+#             */
/*   Updated: 2022/01/28 16:55:30 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
		{
			j = 0;
			i -= j;
		}
		if (!little[j])
			return ((char *)big + i - j + 1);
		i++;
	}
	return (NULL);
}
