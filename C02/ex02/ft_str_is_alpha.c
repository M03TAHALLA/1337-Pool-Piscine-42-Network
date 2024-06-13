#include<unistd.h>

int ft_str_is_alpha(char *str){
    int is_alpha = 1 ;
    while (*str != '\0')
    {
        if((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z') ){
            is_alpha = 0 ;
        }
        
        str = str + 1 ;
    }
    
    return is_alpha ;
    
}