#include "libft.h"

/*
** Applies the function f to every character of the string s precising its index
** as first argument.
** Every character is passed by adress to the function f so that it could be`
** modified is necessary.
** \param s The string to iterate on
** \param f The function to calls on every character of s
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (f == NULL)
		return;
	i = 0;
	while (*s)
		f(i++, s++);
}