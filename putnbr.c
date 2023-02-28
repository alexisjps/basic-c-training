/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:33:49 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 21:42:57 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char a)
{
    write(1, &a, 1);
}

void ft_putnbr(int nb)
{
    long n;
    
    n = nb;
    if (n < 0)
    {
        n -= n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        nb += '0';
        putchar(nb);
    }
}

int main()
{
    ft_putnbr(20000);
}