/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:24:25 by nongona           #+#    #+#             */
/*   Updated: 2020/07/09 16:27:01 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_reverse_alphabet(void)
{
    char letter = 'z';
    while(letter >= 'a'){
        ft_putchar( letter);
        letter--;
    }
}
