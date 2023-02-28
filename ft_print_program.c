/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:11:20 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 23:19:18 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int index;

    index = 0;
    if (argc >= 0)
    {
        while (argv[0][index])
        {
            index++;
        }
        write(1, argv[0], index);
    }
}