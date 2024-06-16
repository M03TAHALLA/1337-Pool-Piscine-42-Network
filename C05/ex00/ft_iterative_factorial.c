#include<unistd.h>
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