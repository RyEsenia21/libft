/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:54:56 by ryesenia          #+#    #+#             */
/*   Updated: 2021/10/16 14:28:14 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int a)
{
	if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)))
	{
		return (1);
	}
	return (0);
}