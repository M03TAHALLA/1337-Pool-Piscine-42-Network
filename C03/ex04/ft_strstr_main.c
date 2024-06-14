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

void main(){
    char c[] = "1337 School";
    char d[] = "School";

    if(ft_strstr(c,d) == 'Y'){
        write(1,"Sous-chaîne trouvée",21);
    }
    if (ft_strstr(c,d) == 'N')
    {
        write(1,"Sous-chaîne non trouvée",25);
    }
    

}