/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagda <lnagda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:01:33 by lnagda            #+#    #+#             */
/*   Updated: 2023/07/11 18:32:24 by lnagda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_numbers(void){
    char digit='0';
    while(digit<='9'){
        ft_putchar(digit);
        ft_putchar('\n');
        digit++;
    }
}