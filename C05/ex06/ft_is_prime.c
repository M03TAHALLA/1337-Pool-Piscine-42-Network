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