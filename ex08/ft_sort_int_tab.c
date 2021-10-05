/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:56:52 by coder             #+#    #+#             */
/*   Updated: 2021/10/05 02:16:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_o;
	int	count_i;

	count_o = 0;
	while (count_o < size - 1)
	{
		count_i = 0;
		while (count_i < (size - count_o - 1))
		{
			if (tab[count_i] > tab[count_i + 1])
				ft_swap(&tab[count_i], &tab[count_i + 1]);
			count_i ++;
		}
		count_o ++;
	}
}
