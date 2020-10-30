/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:24:36 by dboyer            #+#    #+#             */
/*   Updated: 2020/09/29 12:29:43 by mlabouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_string.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return ('A' + (c - 'a'));
	return (c);
}