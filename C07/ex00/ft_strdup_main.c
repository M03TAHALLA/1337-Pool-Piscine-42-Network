#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)calloc(ft_str_length(src) , sizeof(char) + 1);

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = ft_strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
    free(allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}