#include<unistd.h>

char *ft_strcpy(char *dest, char *src){

    while (*dest != '\0')
    {
        *src = *dest;
        dest = dest + 1;
        src = src + 1 ;
    }
    return src;
    
}