/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_sentence.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisstephan <alexisstephan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:41:25 by alexissteph       #+#    #+#             */
/*   Updated: 2023/02/28 23:57:41 by alexissteph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// char put(char *a)
// {
//     write(1, &a, 1);
// }

int reverse(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    while (str[index])
    {
        index--;
    }
    // str[index] = '\0';
    return (str);
}

int main()
{
    printf("%s", reverse("alexis"));
}