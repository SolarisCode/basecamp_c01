/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:41:39 by coder             #+#    #+#             */
/*   Updated: 2021/10/05 02:30:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	mid;
	int	count;

	mid = size / 2;
	count = 0;
	size --;
	while (size >= mid)
	{
		ft_swap(&tab[size], &tab[count]);
		count ++;
		size --;
	}
}
