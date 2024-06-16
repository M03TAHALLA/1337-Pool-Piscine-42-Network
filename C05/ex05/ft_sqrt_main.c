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
int ft_iterative_power(int nb, double power){

    int i = 0 ;
    double pow = 1 ;
    if(power > 0){
    while (i < power)
    {
        pow = pow * nb ;
        i++;
    }
    return pow;
    }
    
}
int ft_sqrt(int nb){
    int i = 0;
    while (ft_iterative_power(i,2) <= nb)
    {
        if(ft_iterative_power(i,2) ==  nb){
            return i ;
        }
        i++;
    }

    return 0 ;
    


}

void main(){
    ft_putnbr(ft_sqrt(25));
}