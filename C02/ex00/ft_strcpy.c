/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:34:15 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/03 21:37:58 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int count = 0;

	while(src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}
