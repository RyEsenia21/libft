/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryesenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:40:16 by ryesenia          #+#    #+#             */
/*   Updated: 2021/10/16 15:40:26 by ryesenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		return ('a' + a - 'A');
	else
		return (a);
}
