/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:54:21 by hrha              #+#    #+#             */
/*   Updated: 2022/01/28 16:54:21 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
	char	*dest;
    int	    i;

    i = ft_strlen(s);
    dest = (char    *)malloc(i + 1);
	if (!dest)
		return (NULL);
    i = 0;
    while (s[i])
    {
        dest[i] = s[i];
		i++;
    }
    dest[i] = '\0';
    return (dest);
}
