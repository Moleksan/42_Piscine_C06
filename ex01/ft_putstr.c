/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:21:19 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/30 22:57:13 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		write(1, i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "hello";

// 	//str = "hello";
// 	ft_putstr(str);
// 	return (0);
// }
