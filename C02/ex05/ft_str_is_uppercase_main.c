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
int ft_str_is_uppercase(char *str){
    int is_uppercase = 1 ;

    while (*str != '\0')
    {
        if(*str < 'A' || *str > 'Z'){
            is_uppercase = 0;
        }
        str = str + 1 ;
    }

    return is_uppercase;
}

void main(){
    char str[] = "";
    char str1[] = "hello";
    char str2[] = "HELLO";
    char str3[] = "hEllo";
    ft_putnbr(ft_str_is_uppercase(str));
    ft_putnbr(ft_str_is_uppercase(str1));
    ft_putnbr(ft_str_is_uppercase(str2));
    ft_putnbr(ft_str_is_uppercase(str3));
}