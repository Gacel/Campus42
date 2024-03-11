/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:58:27 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/11 19:30:21 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*low_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*first_letter(char *str)
{
	int	i;

	i = 0;
	low_letter(str);
	while (str[i] != '\0')
	{
		if (str[i] == str[0])
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	*ft_str_space(char *str)
{
	int	i;

	i = 0;
	first_letter(str);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_space(str);
	while (str[i] != '\0')
	{
		if ((str[i] == ';') || (str[i] == ',') || ((str[i] == '.'))
			|| (str[i] == '+') || (str[i] == '-') || (str[i] == ':'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
