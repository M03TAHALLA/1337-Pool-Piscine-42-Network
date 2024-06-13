#include<unistd.h>
char *ft_strncpy(char *dest, char *src, unsigned int n){
    int count = 0;
    int i = 0;
    while (src[i] != '\0')
    {
        count++;
        i++;
    }

    unsigned int j = 0;

    if(count >= n){
        while (j <= n-1)
    {
        dest[j] = src[j];
        j++;
    }
    }else{
        write(1,"La Taille Depasse Taille Source !",33);
    }

    dest[j] = '\0';

    return dest;    
}