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

void main(){
    char src[] = " World";
    char dest[] = "Hello";
    unsigned int size = 7 ;
    ft_strlcat(dest,src,size);
    int i = 0;
    if(ft_strlcat(dest,src,6) == size){
        while (dest[i] != '\0')
    {
        write(1,&dest[i],1);
        i++;
    }
    write(1,"-----> ",7);
    write(1,"Lenght of New String : ",23);
    ft_putnbr(ft_strlcat(dest,src,size));
    }else{
        write(1," size < or =  the lenhgt of dest Table",40);
    }

    
}