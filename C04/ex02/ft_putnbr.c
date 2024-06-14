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
        c[i++] = nbl % 10 + "0";
        nbl /= 10;
    }
    int j = 0;
    while ( j <= i)
    {
        write(1,&c[j++],1);
    }
    
}