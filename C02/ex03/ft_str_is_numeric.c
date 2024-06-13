#include<unistd.h>

int ft_str_is_numeric(char *str){
    int is_numeric = 1 ; 
    while (*str != '\0')
    {
        if(*str - '0' < 0 || *str - '0' > 9){
            is_numeric = 0 ;
        }
        str = str +1 ;
    }

    return is_numeric;
    
}