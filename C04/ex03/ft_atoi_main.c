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
    while ( i > 0)
    {
        write(1,&c[--i],1);
    }
    
}
int ft_atoi(char *str){
    int sign = 1 ;
    int result = 0 ;
    while (*str == 32)
    {
        str++;
    }
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -sign ;
        }
        str++;
    }

    while (*str - '0' >= 0 && *str - '0' <= 9 )
    {
        result = (result * 10) + (*str - '0') ; 
        str++;
    }

    return sign*result;
    
    
    
}
void main(){
    char c[] = "    ---+--+123 4ab567";
    ft_putnbr(ft_atoi(c));
}