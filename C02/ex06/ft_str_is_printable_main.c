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
int ft_str_is_printable(char *str){
    int is_printable = 1 ;
    while (*str != '\0')
    {
        if(*str  < 32 || *str > 126){
            is_printable = 0;
        }
        str = str + 1 ;
    }
    return is_printable;
    
}

void main(){
    char str[] = "S[a$";

    ft_putnbr(ft_str_is_printable(str));
}