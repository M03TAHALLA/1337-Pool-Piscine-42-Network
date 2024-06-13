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

void main(){
    char src[] = "World";
    char dest[] = "Hello";
    ft_strcat(src,dest);
    int i = 0;

    while (dest[i] != '\0')
    {
        write(1,&dest[i],1);
        i++;
    }
    
}