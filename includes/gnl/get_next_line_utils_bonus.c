/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:54:00 by bahbibe           #+#    #+#             */
/*   Updated: 2022/11/15 04:55:59 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*f_strjoin(char *s1, char *s2)
{
	char	*str;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = f_strlen(s1) + f_strlen(s2) + 1;
	str = malloc(size);
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i])
			str[j++] = s1[i++];
		free(s1);
	}
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

int	f_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*f_strchr(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
