/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:40:23 by moleksan          #+#    #+#             */
/*   Updated: 2023/08/01 20:23:31 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	nb;
	int	ns;

	i = 0;
	mult = 1;
	nb = 0;
	ns = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ns++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	if (ns % 2 == 1)
		mult = -1;
	nb *= mult;
	return (nb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" ---+--+-1234ab567"));
// 	printf("%d\n", ft_atoi("+++456"));
// 	printf("%d\n", ft_atoi("+--+789"));
// 	printf("%d\n", ft_atoi("+-------999910"));
// 	printf("%d\n", ft_atoi("--+234"));
// 	return (0);
// }
