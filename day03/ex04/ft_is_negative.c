/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagda <lnagda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:33:23 by lnagda            #+#    #+#             */
/*   Updated: 2023/07/11 18:35:41 by lnagda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_is_negative(int n){
    if(n<0){
        ft_putchar('N');
    }
    else{
        ft_putchar('P');
    }
}