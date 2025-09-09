#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int    i;
    char    *res;
    char    new_c;

    new_c = (char) c;
    res = NULL;
    i = 0;

    while (s[i])
    {
        if(s[i] == new_c)
            res = ((char *) &s[i]);
        i++;
    }
    if (s[i] == new_c)
        res = ((char *) &s[i]);
    return (res);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    const char *str = "hello this is test for strrchr";
//    char ch = 't';
//    const char *ft_str = "hello this is test for ft_strrchr";
//    char ft_ch = 't';
   
//    char *p = strrchr(str, ch);
//    char *ft_p = ft_strrchr(str, ch);

//    printf("strrchr String starting from '%c' is: %s\n", ch, p);
//    printf("ft_strrchr String starting from '%c' is: %s\n", ft_ch, ft_p);
// }