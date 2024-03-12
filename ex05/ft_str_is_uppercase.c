/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:34:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/12 12:59:44 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_caps(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_caps(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
