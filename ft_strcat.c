/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:28:13 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 22:37:23 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int index;
    int q;
    
    index = 0;
    q = 0;
    while (dest[index])
    {
        index++;
    }
    while (src[q])
    {
        dest[index] = src[q];
        index++;
        q++;
    }
    dest[index] = '\0';
	return (dest);
}

int main()
{
    char dest[] = "Coucou";
    char src[] = "Tu vas bien ?";
    printf("%s", ft_strcat(dest, src));
}