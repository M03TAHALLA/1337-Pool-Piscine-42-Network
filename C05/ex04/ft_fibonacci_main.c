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

int ft_fibonacci(int index) {
    if (index < 0) {
        return -1;
    }
    if (index == 0) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}


void main(){
    ft_putnbr(ft_fibonacci(-10));
}