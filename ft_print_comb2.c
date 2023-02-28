/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:44:06 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 21:58:21 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char a)
{
    write(1, &a, 1);
}

void ft_putprint(int a)
{
    putchar((a / 10) + '0');
    putchar((a % 10) + '0');
    putchar(' ');
}

void ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (x <= 98)
    {
        y = x + 1;
        while (y <= 99)
        {
            ft_putprint(x);
            ft_putprint(y);
            if (x != 98)
            {
                putchar(',');
            }
            y++;
        }
        x++;
    }    
}

int main() 
{
    ft_print_comb2();
}