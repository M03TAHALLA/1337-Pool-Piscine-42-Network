#include<unistd.h>
char ft_strstr(char *str, char *to_find){
    char *pointer_str;
    char *pointer_find ;
    int is_find = 0 ;
    pointer_str = str;

    while (*pointer_str != '\0')
    {
        pointer_find = to_find;

        while (*pointer_find == *pointer_str && *pointer_find != '\0' && *pointer_str != '\0')
        {
            pointer_find++;
            pointer_str++;
        }

        if(*pointer_find == '\0'){
           
            return 'Y';
        }

        pointer_str = pointer_str + 1 ;
        
    }

    return 'N' ;
     

}