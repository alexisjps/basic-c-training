/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:42:25 by alexissteph       #+#    #+#             */
/*   Updated: 2023/03/02 20:49:44 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int index;

    index = 0;
    if (argc > 1 && argc < 3)
    {
        while (argv[1][index])
        {
            if (argv[1][index] == ' ' || argv[1][index] == '\n' || argv[1][index] == '\r' || argv[1][index] == '\f' || argv[1][index] == '\v')
            {
                break;
            }
            index++;
        }
        write(1, argv[1], index);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
}