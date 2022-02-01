/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:30:59 by hrha              #+#    #+#             */
/*   Updated: 2022/02/01 19:35:28 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
    while (s[i])
		i++;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}