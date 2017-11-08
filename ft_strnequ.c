/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:02 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/08 18:55:48 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares lexicographicaly two strings until n characters or until a '\0'
** is found
** \param s1 The first string to compare
** \param s2 The second string to compare
** \param n The number of character to compare
** \return 1 if the two strings are equal, 0 otherwise
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 && *s2 && n != 0)
	{
		if (*s1++ != *s2++)
			return (0);
		n--;
	}
	return (1);
}
