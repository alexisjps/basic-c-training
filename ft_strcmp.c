/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:20:44 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 22:27:27 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int index;

    index = 0;
    while(s1[index])
    {
        if (s1[index] != s2[index])
        {
            return (s1 - s2);
        }
        index++;
    }
    return ('\0' - s2);
}

int main()
{
    char s1[] = "alexis";
    char s2[] = "A";
    printf("%d", ft_strcmp(s1, s2));
}