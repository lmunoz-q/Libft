/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:01:11 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 20:01:17 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strspn(const char *s1, const char *accept)
{
	size_t		value;

	value = 0;
	while (*s1 && ft_strchr(accept, *s1++))
		value++;
	return (value);
}
