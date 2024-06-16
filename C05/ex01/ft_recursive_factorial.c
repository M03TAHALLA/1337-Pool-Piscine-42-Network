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