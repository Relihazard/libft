#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	while (n != 0)
	{
		*dest++ = *source++;
		n--;
	}
	return (dst);
}