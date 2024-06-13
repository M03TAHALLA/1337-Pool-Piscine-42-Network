#include<unistd.h>

int ft_str_is_printable(char *str){
    int is_printable = 1 ;
    while (*str != '\0')
    {
        if(*str  < 32 || *str > 126){
            is_printable = 0;
        }
        str = str + 1 ;
    }
    return is_printable;
    
}