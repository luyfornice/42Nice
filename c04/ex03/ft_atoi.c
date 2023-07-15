/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luynagda <luynagda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:09:43 by lnagda            #+#    #+#             */
/*   Updated: 2023/07/14 12:21:12 by luynagda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

int	ft_char_is_alpha(char *str, int i)
{
	if (str[i] > 'z' || ((str[i] > 'Z') && (str[i] < 'a')) || str[i] < 'A')
		return (0);
	else
		return (1);
}

int	check_minus(int result, int minus)
{
	if (minus % 2 == 0)
		return (result);
	else
		return (-result);
}

int	prepare_result(char *str, int i, int result, int minus)
{
	int	j;

	j = 0;
	while (ft_char_is_numeric(str, i))
	{
		if (j < 10)
			result = (result * 10) + (str[i] - '0');
		i++;
		j++;
	}
	return (check_minus(result, minus));
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	minus = 0;
	result = 0;
	while (str[i])
	{
		if (ft_char_is_alpha(str, i))
			return (check_minus(result, minus));
		else if (str[i] == '-')
		{
			minus++;
			i++;
		}
		else if (ft_char_is_numeric(str, i))
			return (prepare_result(str, i++, result, minus));
		else
			i++;
	}
	return (check_minus(result, minus));
}
