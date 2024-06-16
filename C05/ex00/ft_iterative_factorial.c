#include<unistd.h>
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