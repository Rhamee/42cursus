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

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s)
{
	char	*dest;
    int	i;

    i = ft_strlen(s);
    dest = (char *)malloc(i + 1);
	if (!dest)
		retutn (NULL);
    i = 0;
    while (s[i])
    {
        dest[i] = s[i];
		i++;
    }
    dest[i] = '\0';
    return (dest);
}