/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 12:05:05 by jblue-da          #+#    #+#             */
/*   Updated: 2018/12/05 18:03:41 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	char	*tmp;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (str == NULL)
		return (NULL);
	tmp = (char *)s1;
	while (*tmp)
		str[i++] = *tmp++;
	tmp = (char *)s2;
	while (*tmp)
		str[i++] = *tmp++;
	str[i] = '\0';
	return (str);
}
