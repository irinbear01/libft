#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char    new_c;

    new_c = (char) c;
    i = 0;
    while (s[i])
    {
        if(s[i] == new_c)
            return ((char *) &s[i]);
        i++;
    }
    if (s[i] == new_c)
        return ((char *) &s[i]);
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    const char *str = "hello this is test for strchr";
//    char ch = 't';
//    const char *ft_str = "hello this is test for ft_strchr";
//    char ft_ch = 't';
   
//    char *p = strchr(str, ch);
//    char *ft_p = ft_strchr(str, ch);

//    printf("strchr String starting from '%c' is: %s\n", ch, p);
//    printf("ft_strchr String starting from '%c' is: %s\n", ft_ch, ft_p);
// }
