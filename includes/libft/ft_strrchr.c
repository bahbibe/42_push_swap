/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:14:53 by bahbibe           #+#    #+#             */
/*   Updated: 2022/12/26 07:17:49 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) 
{
    size_t i;

    i = ft_strlen(s);
    while (i > 0) 
	{
        if (s[i - 1] == c) 
		{
            return (char *)s + (i - 1);
        }
        i--;
    }
    if (c == '\0') {
        return (char *)s + i;
    }
    return NULL;
}
