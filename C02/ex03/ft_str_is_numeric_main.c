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
int ft_str_is_numeric(char *str){
    int is_numeric = 1 ; 
    while (*str != '\0')
    {
        if(*str - '0' < 0 || *str - '0' > 9){
            is_numeric = 0 ;
        }
        str = str +1 ;
    }

    return is_numeric;
    
}
void main(){
    char str[] = "12368";
    char str2[] = "123H";
    char str3[] = "269&";

    ft_putnbr(ft_str_is_numeric(str));
    ft_putnbr(ft_str_is_numeric(str2));
    ft_putnbr(ft_str_is_numeric(str3));
}