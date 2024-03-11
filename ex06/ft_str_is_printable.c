/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:06:58 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/11 13:53:01 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lower(char c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_lower(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
