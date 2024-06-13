#include<unistd.h>
 char *ft_strcat(char *src,char *dest){

    char *end_dest = dest;

    while (*end_dest != '\0')
    {
        end_dest++;
    }

    while (*src != '\0')
    {
        *end_dest = *src;
        end_dest++;
        src++;
    }

    *end_dest ='\0';

    return dest;
}