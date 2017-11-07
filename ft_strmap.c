/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:02 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 16:51:22 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to every character of the string s to create a new
** string resulting in the succesives applications of f.
** \param s The string to iterate on
** \param f The function to apply
** \return The new string created by the applications of f
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;

	if (f == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * ft_strlen(s))) == NULL)
		return (NULL);
	while (*s)
		*str++ = f(*s++);
	return (str);
}
