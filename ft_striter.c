/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:01 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/08 14:28:59 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to every character of the string s.
** Every character is passed by adress to the function f so that it could be`
** modified is necessary.
** \param s The string to iterate on
** \param f The function to calls on every character of s
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (f == NULL)
		return ;
	while (*s)
		f(s++);
}
