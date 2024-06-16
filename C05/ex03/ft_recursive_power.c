#include<unistd.h>
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
