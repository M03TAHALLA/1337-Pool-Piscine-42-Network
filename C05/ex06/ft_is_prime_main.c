#include<unistd.h>
int ft_sqrt(int nb){
    int i = 0;
    while (i*i <= nb)
    {
        if(i*i ==  nb){
            return i ;
        }
        i++;
    }

    return 0 ;
    
}
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
    while ( i <= ft_sqrt(nb))
    {
        if(nb % i == 0){
            return 0 ;
        }
        i = i + 2;
    }

    return 1 ;
    
    
}

void main(){
    int is_prime = ft_is_prime();

    if(is_prime == 0){
        write(1,"Not Prime",9);
    }
    if(is_prime == 1){
        write(1,"Prime",5);
    }
}