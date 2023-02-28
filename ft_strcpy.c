/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:03:22 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 22:10:11 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int index;

    index = 0;
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}

// int main()
// {
//     char src[] = "alexis";
//     char dest[] = "qqch";
//     printf("voici la destination pour commencer : %s \n", dest);
//     ft_strcpy(dest, src);
//     printf("voici la destination pour finir : %s", dest);
// }