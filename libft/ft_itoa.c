/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:07:07 by hrha              #+#    #+#             */
/*   Updated: 2022/01/29 01:07:07 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long long num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

static void	putnum(long long num, char *dst, int sign, int digit)
{
	if (sign == 1)
		dst[0] = '-';
	while (digit > sign)
	{
		dst[digit - 1] = (num % 10) + '0';
		num /= 10;
		digit--;
	}
}

char	*ft_itoa(int n)
{
	long long	num;
	int			sign;
	int			digit;
	char		*result;

	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		num = -(long long)n;
		sign = 1;
	}
	else
	{
		num = n;
		sign = 0;
	}
	digit = count(num) + sign;
	result = (char *)malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	putnum(num, result, sign, digit);
	result[digit] = 0;
	return (result);
}
