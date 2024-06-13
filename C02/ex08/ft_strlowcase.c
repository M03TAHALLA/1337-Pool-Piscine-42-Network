#include<unistd.h>

char *ft_strlowcase(char *str){
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z'){
            str = str + 1 ; 
        }else{
        *str = *str + 32;
        str = str + 1 ; 
        }
    }

    return str;
}