/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:54:12 by hrha              #+#    #+#             */
/*   Updated: 2022/01/28 16:54:12 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]) && j + 1 > i)
		j--;
	if (i > j + 1)
		return (ft_strdup(""));
	else
	{
		str = (char *)malloc(sizeof(char) * (j - i + 2));
		if (!str)
			return (NULL);
		ft_strlcpy(str, (char *)s1 + i, j - i + 2);
	}
	return (str);
}
