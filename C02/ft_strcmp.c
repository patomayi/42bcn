/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emi <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:53:56 by emi               #+#    #+#             */
/*   Updated: 2025/02/28 15:16:55 by emi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - +(unsigned char *)s2);
}

int	main(void)
{
	char	str1[];
	char	str2[];
	char	str3[];

	str1 = "Hola";
	str2 = "Hola";
	str3 = "Adios";
	printf("Comparar str1 y str2: %d\n", ft_strcmp(str1, str2));
	printf("Comparar str1 y str3: %d\n", ft_strcmp(str1, str3));
	printf("Comparar str3 y str1: %d\n", ft_strcmp(str3, str1));
	return (0);
}
