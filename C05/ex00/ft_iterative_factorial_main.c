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

    int fact = 1 ;
    int i = 1 ;
    while (i <= nb)
    {
        fact = fact * i ;
        i++;
    }
    return fact;
}

void main(){
   ft_putnbr(ft_iterative_factorial(12));
   
}
