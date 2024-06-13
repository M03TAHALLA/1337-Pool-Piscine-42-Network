#include<unistd.h>
void ft_putnbr(int nb){
    long nbl ;
    nbl = nb ;
    char c[9];
    int i = 0;
    if(nb < 0){
        write(1,"-",1);
        nbl *= -1 ;
    }
    if(nbl == 0){
        write(1,"0",1);
    }
    while (nbl > 0)
    {
        c[i++] = (nbl % 10) + '0';
        nbl /= 10;
    }
    while ( i > 0 )
    {
        write(1,&c[--i],1);
    }
    
}
 char *ft_strcat(char *src,char *dest){

    char *end_dest = dest;

    while (*end_dest != '\0')
    {
        end_dest++;
    }

    while (*src != '\0')
    {
        *end_dest = *src;
        end_dest++;
        src++;
    }

    *end_dest ='\0';

    return dest;
}

void main(){
    char src[] = "World";
    char dest[] = "Hello";
    ft_strcat(src,dest);
    int i = 0;

    while (dest[i] != '\0')
    {
        write(1,&dest[i],1);
        i++;
    }
    
}