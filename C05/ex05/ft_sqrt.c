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