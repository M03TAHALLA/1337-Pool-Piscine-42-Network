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
int ft_str_is_lowercase(char *str){
    int is_lowercase = 1 ;

    while (*str != '\0')
    {
        if(*str < 'a' || *str > 'z'){
            is_lowercase = 0;
        }
        str = str + 1 ;
    }

    return is_lowercase;
    
}
void main(){
    char str[] = "hello";
    char str2[] = "Hello";
    char str3[] = "hellO";

    ft_putnbr(ft_str_is_lowercase(str));
    ft_putnbr(ft_str_is_lowercase(str2));
    ft_putnbr(ft_str_is_lowercase(str3));
}