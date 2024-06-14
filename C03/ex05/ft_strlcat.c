#include<unistd.h>
 unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

    char *end_dest = dest;
    unsigned int longueur_totale = 0;
    int i = 0;
    int count = 0 ;

    while (*end_dest != '\0')
    {
        end_dest++;
        count++;
        longueur_totale++;
    }
    if(size-1 >= count){
    int size_Add = (size - 1) - count;

    while (i <= size_Add)
    {
        *end_dest = *src;
        end_dest++;
        src++;
        i++;
        longueur_totale++;
    }

    *end_dest ='\0';
    return longueur_totale;
    }else{
        return longueur_totale;
    }   


    
}
