/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:39:55 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/03 22:13:47 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A' && str[c] <= 'Z'))
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}
