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
int ft_iterative_factorial(int nb){

    unsigned int fact = 1 ;
    int i = 1 ;
    if(nb > 0){
    while (i <= nb)
    {
        fact = fact * i ;
        i++;
    }
    }
    if (nb == 0)
    {
        fact = 1 ;
    }
    if(nb < 0){
        fact = 0;
    }

    return fact;
}

void main(){
   ft_putnbr(ft_iterative_factorial(10));
   write(1," , ",3);
   ft_putnbr(ft_iterative_factorial(5));
   
}
