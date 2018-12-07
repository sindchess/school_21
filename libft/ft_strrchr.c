/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:37:03 by jblue-da          #+#    #+#             */
/*   Updated: 2018/12/05 18:11:42 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s);
	tmp = (char *)s;
	tmp += len;
	while (len--)
	{
		if (*tmp == c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
