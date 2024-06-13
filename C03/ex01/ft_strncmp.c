#include<unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i = 0 ;
    int is_cmp = 1 ;
    while (i < n)
    {
        if(*s1 != *s2){
            is_cmp = 0 ;
        }
        s1 = s1 + 1 ;
        s2 = s2 + 1;

        i++;
    }

    return is_cmp;
    
}