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
int f_power(int nb, int power){

    int i = 0 ;
    int pow = 1 ;
    if(power > 0){
    while (i < power)
    {
        pow = pow * nb ;
        i++;
    }
    return pow;
    }
    
}

int ft_recursive_power(int nb, int power){
    if(power <= 0){
        return 1 ;
    }else{
        return nb * (f_power(nb,power - 1));
    }
}

void main(){
    ft_putnbr(ft_recursive_power(4,4));
    write(1, "\n", 1);
    ft_putnbr(ft_recursive_power(4,-2));

}