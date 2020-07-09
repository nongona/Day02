/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:31:07 by nongona           #+#    #+#             */
/*   Updated: 2020/07/09 16:33:30 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_numbers(void)
{
    char buhle = '1';
    while (buhle <= '9')
    {
        ft_putchar(buhle);
        buhle++;
    }
}
