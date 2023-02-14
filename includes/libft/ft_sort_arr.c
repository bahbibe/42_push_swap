/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:34:50 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 08:31:45 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_sort_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (arr[i] > arr[i + 1])
		{
			ft_swap(&arr[i], &arr[i + 1]);
			i = 0;
		}
		else
			i++;
	}
	return (arr);
}
