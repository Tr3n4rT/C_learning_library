/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:19:11 by mleroux           #+#    #+#             */
/*   Updated: 2022/03/09 19:17:47 by mleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
		{
			return (0);
		}
		if ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123))
		{
			return (0);
		}
		i++;
	}
	return (1);
}