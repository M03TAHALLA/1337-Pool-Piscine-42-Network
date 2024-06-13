#include<unistd.h>
char *ft_strupcase(char *str){

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z'){
            str = str + 1 ;
        }else{
        *str = *str - 32;
        str = str + 1 ;
        } 
    }

    return str;
    
}