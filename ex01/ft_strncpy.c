/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:40:30 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/03/10 13:10:37 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	strncpy (dest, src, n);
	return (dest);
}
