#include<unistd.h>
int ft_strcmp(char *s1, char *s2){
    int is_cmp = 1 ;
    int counts1 = 0 ;
    int counts2 = 0 ;
    char **p = &s1;
    char **p2 = &s2;
    while (**p != '\0')
    {
        counts1++;
        *p = *p + 1 ;
    }
    while (**p2 != '\0')
    {
        counts2++;
        *p2 = *p2 + 1 ;
    }
    if(counts1 == counts2){
    while (*s2 != '\0')
        {
            if(*s1 != *s2){
                is_cmp = 0 ;
            }
            s1 = s1 + 1 ;
            s2 = s2 + 1 ;
        }
    }else{
        is_cmp = 0 ;
    }
   

    return is_cmp;
    
}