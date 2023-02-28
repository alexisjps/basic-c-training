/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_args.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:30:17 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 23:40:55 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int counter(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    return (index);
}

int main(int argc, char *argv[])
{
    int index;
    int count;
    
    index = 0;
    count = argc - 1;
    while (argv[count])
    {
        if (count > 1)
        {
            while (argv[index])
            {
                index++;
            }
            write(1, argv[count], counter(argv[count]));
            write(1, "\n", 1);
        }
        count--;
    }
}