/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:34:34 by jblue-da          #+#    #+#             */
/*   Updated: 2018/12/07 18:55:28 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *res_lst;
	t_list *node;

	tmp = lst;
	while (tmp)
	{
		node = (*f)(tmp);
		ft_lstadd(&res_lst, node);
		tmp = tmp->next;
	}
	return (res_lst);
}
