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
    int i = 2 ;
    while ( i <= nb/2)
    {
        if(nb % i == 0){
            return 0 ;
        }
        i = i + 1;
    }
    return 1 ;
}
int ft_find_next_prime(int nb){
    
    if(ft_is_prime(nb)){
        return nb;
    }
    int i = 2 ;
    while (nb >= 2)
    {
        if(ft_is_prime(nb)){
            return nb ;
        }
        nb++;
    }

    return nb;
    
    
}