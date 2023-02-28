/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:46:26 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 23:08:45 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int convert(char num)
{
    return (num -= '0');
}

int skip_white_space(char a)
{
    if (a == ' ' || a == '\n' || a == '\v' || a == '\t' || a == '\f' || a == '\r')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int ft_atoi(char *str)
{
    int index;
    int count;
    int toytoy;

    index = 0;
    while (skip_white_space(str[index]))
    {
        index++;
    }
    count = 1;
    while (str[index] == '-' || str[index] == '+')
    {
        if (str[index] == '-')
        {
            count *= -1;
        }
        index++;
    }
    toytoy = 0;
    while (str[index] >= '0' && str[index] <= '9')
    {
        toytoy *= 10;
        toytoy += convert(str[index]);
        index++;
    }
    return (toytoy * count);
}

int main()
{
    printf("%d", ft_atoi(" ---+--+1234ab567"));
}