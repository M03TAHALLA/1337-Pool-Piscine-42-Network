#include<unistd.h>
int ft_is_prime(int nb){
    if(nb == 0){
        return 0;
    }
    if(nb < 0){
        return 0;
    }
    if(nb % 2 == 0 ){
        return 0;
    }
    int i = 3 ;
    while ( i <= nb/2)
    {
        if(nb % i == 0){
            return 0 ;
        }
        i = i + 1;
    }
    return 1 ;
}
int ft_find_next_prime(int nb){
    
    if(ft_is_prime(nb)){
        return nb;
    }
    int i = 2 ;
    while (nb >= 2)
    {
        if(ft_is_prime(nb)){
            return nb ;
        }
        nb++;
    }

    return nb;
    
    
}
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
void main(){

    ft_putnbr(ft_find_next_prime(8));
}