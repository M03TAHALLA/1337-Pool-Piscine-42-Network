#include<unistd.h>

int ft_str_is_lowercase(char *str){
    int is_lowercase = 1 ;

    while (*str != '\0')
    {
        if(*str < 'A' || *str > 'Z'){
            is_lowercase = 0;
        }
        str = str + 1 ;
    }

    return is_lowercase;
    
}