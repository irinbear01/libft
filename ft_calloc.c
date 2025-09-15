#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned    char    *tmp_ptr;

    tmp_ptr = (unsigned char *)s;
    while (n>0)
    {
        *tmp_ptr = 0;
        tmp_ptr++;
        n--;
    }
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count != 0 && (count * size) / count != size)
		return (NULL);

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     if (!arr)
//         return (1);
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);  // 0 0 0 0 0
//     free(arr);
//     return 0;
// }