/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 10:57:58 by ibahari           #+#    #+#             */
/*   Updated: 2017/05/10 10:58:06 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char *p1, char *p2)
{
	if (!ft_strendswith(p1, "/"))
		return (ft_strjoin(ft_strjoinch(p1, '/'), p2));
	return (ft_strjoin(p1, p2));
}
