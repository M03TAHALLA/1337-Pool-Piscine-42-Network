#include<unistd.h>
int ft_str_is_alpha(char *str){
    while (*str != '\0')
    {
        if((*str < 'a' && *str > 'z') || (*str < 'A' && *str > 'Z')){
            return 0 ;
        }
        str = str + 1 ;
    }
    return 1 ;
    
}