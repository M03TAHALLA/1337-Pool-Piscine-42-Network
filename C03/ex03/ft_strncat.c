#include<unistd.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
     char *end_dest = dest;
     int i = 0;

    while (*end_dest != '\0')
    {
        end_dest++;
    }

    while ( i < nb )
    {
        *end_dest = *src;
        end_dest++;
        src++;
        i++;
    }

    *end_dest ='\0';

    return dest;
}