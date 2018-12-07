/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:43:26 by jblue-da          #+#    #+#             */
/*   Updated: 2018/12/07 18:25:56 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	if (alst == NULL)
		return ;
	tmp = *alst;
	*alst = (*alst)->next;
	(*del)(tmp->content, tmp->content_size);
	tmp->next = NULL;
	free(tmp);
}
