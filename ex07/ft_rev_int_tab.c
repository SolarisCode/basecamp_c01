/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:41:39 by coder             #+#    #+#             */
/*   Updated: 2021/10/04 01:22:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	mid;
	int	temp;
	int	count;

	mid = size / 2;
	temp = 0;
	count = 0;
	size --;
	while (tab[size] != '\0' && size >= mid)
	{
		temp = tab[size];
		tab[size] = tab[count];
		tab[count] = temp;
		count ++;
		size --;
	}
}
