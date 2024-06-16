int ft_iterative_power(int nb, int power){

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