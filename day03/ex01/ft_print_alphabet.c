/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagda <lnagda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:51:30 by lnagda            #+#    #+#             */
/*   Updated: 2023/07/11 18:32:36 by lnagda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_alphabet(void){
    char ch;
    for (ch='a'; ch<='z'; ch++){
        ft_putchar(ch);
        ft_putchar('\n');
    }
}