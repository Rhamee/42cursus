/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:23:48 by hrha              #+#    #+#             */
/*   Updated: 2021/12/15 19:52:04 by hrha             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *memchr(const void *s, int c, size_t n)
{
    size_t  i;
    while (i < n)
    {
        if (*(unsigned char *)s == (unsigned char)c)
            return (s);
        s++;
    }
    return (NULL);
}