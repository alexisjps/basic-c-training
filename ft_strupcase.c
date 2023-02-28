/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:11:58 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 22:18:43 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] -= 32;
        }
        index++;
    }
    str[index] = '\0';
    return (str);
}

int main()
{
    char str[] = "Alexis ST";
    printf("%s", ft_strupcase(str));
}