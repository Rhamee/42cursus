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

int	count(long long num)
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
void putnum(char *dst, int sign, int digit)
{
	if (sign == 1)
		result[0] = '-';
	whlie (digit > sign)
	{
		result[digit - 1] = (num % 10) + '0';
		num /= 10;
		digit--;
	}
}

char *ft_itoa(int n)
{
	long long	num;
	int	sign;
	int	digit;
	char *result;

	if (n < 0)
	{
		num = -n;
		sign = 1;
	}
	else
	{
		num = n;
		sign = 0;
	}
	digit = count(num) + sign;
	if (!(result = (char *)malloc(sizeof(char) * digit)))
		return (NULL);
	putnum(result, sign, digit);
	return (result);
}