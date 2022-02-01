/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:53:48 by hrha              #+#    #+#             */
/*   Updated: 2022/01/28 16:53:48 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((nptr >= 9 && nptr <= 13) || nptr == 32)
		nptr++;
	if (nptr == '-' || nptr == '+')
	{
		if (nptr == '-')
			sign = -1;
		nptr++;
	}
	while (nptr >= '0' && nptr <= '9')
    {
        result = result * 10 + nptr - '0';
        nptr++;
    }
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	if (result > 9223372036854775808 && sign == -1)
		return (0);	
	return ((result*sign));
}