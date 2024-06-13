#include<unistd.h>
int ft_str_is_uppercase(char *str){
    int is_uppercase = 1 ;

    while (*str != '\0')
    {
        if(*str < 'A' || *str > 'Z'){
            is_uppercase = 0;
        }
        str = str + 1 ;
    }

    return is_uppercase;
}