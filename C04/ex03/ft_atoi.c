#include<unistd.h>
int ft_atoi(char *str){
    int sign = 1 ;
    int result = 0 ;
    while (*str == 32)
    {
        str++;
    }
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -sign ;
        }
        str++;
    }

    while (*str - '0' >= 0 && *str - '0' <= 9 )
    {
        result = (result * 10) + (*str - '0') ; 
        str++;
    }

    return sign*result;
    
    
    
}