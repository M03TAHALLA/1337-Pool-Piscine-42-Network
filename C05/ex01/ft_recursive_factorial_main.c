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
int factorial(int nb){

    unsigned int fact = 1 ;
    int i = 1 ;
    if(nb > 0){
    while (i <= nb)
    {
        fact = fact * i ;
        i++;
    }
    }

    return fact;
}
int ft_recursive_factorial(int nb){

    if(nb <= 1){
        return 1 ;
    }else{
        return nb * (factorial(nb-1));
    }

}

void  main(){
    ft_putnbr(ft_recursive_factorial(5));
    write(1," , ",3);
   ft_putnbr(ft_recursive_factorial(0));
}