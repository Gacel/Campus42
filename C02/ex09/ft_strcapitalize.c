/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:18:21 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/12 12:52:59 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize_next(char *str)
{
	int	activador;
	int	i;

	activador = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= '0' && str[i] <= '9')
			|| (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
		{
			activador = 1;
		}
		else if (activador)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			activador = 0;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	capitalize_next(str);
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char input[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux;";

	printf("Original: %s\n", input);

	ft_strcapitalize(input);

	printf("Capitalized: %s\n", input);

	return (0);
}
*/
