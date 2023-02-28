/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:19:54 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 23:29:30 by alexissteph      ###   ########.fr       */
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
    int count;
    int index;
    
    index = 0;
    if (argc >= 1)
    {
        count = 1;
        while (argv[count])
        {
            while (argv[index])
            {
                index++;
            }
            write(1, argv[count], counter(argv[count]));
            write(1, "\n", 1);
            count++;
        }
    }
}