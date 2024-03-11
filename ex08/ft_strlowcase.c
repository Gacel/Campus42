/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:29:18 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/11 17:55:27 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)

{
	char prueba[] = "PRUEBA";
	printf("Esta es la cadena antes de cambiarla:%s\n", prueba);
	ft_strlowcase(prueba);
	printf("Esta es la cadena después:%s\n",prueba);
	
	return (0);
}
*/
