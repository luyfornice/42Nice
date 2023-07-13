/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagda <lnagda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:31:45 by lnagda            #+#    #+#             */
/*   Updated: 2023/07/13 15:46:09 by lnagda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_charupcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}

void	*ft_charlowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
	}
}

int	ft_char_is_alpha(char *str, int i)
{
	if (str[i] > 'z' || ((str[i] > 'Z') && (str[i] < 'a')) || str[i] < 'A')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_alpha(str, i))
		{
			if (i == 0)
				ft_charupcase(str, i);
			else if (str[i - 1] == ' ')
				ft_charupcase(str, i);
			else if (str[i - 1] == '+' || str[i - 1] == '-')
				ft_charupcase(str, i);
			else
				ft_charlowcase(str, i);
			i++;
		}
		else
			i++;
	}
	return (str);
}
