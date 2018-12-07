/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 12:05:28 by jblue-da          #+#    #+#             */
/*   Updated: 2018/12/05 18:09:54 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	while (i < size)
		mem[i++] = 0;
	mem[i] = 0;
	return (mem);
}
