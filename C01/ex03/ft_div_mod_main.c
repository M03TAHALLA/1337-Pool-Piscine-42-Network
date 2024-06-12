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
    while ( i > 0 )
    {
        write(1,&c[--i],1);
    }
    
}
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b ;
    *mod = a % b ;
}

void main(){
    int a = 45;
    int b = 7;
    int div ;
    int mod ;
    ft_div_mod(a,b,&div,&mod);
    write(1,"div : ",6);
    ft_putnbr(div);
    write(1,"  mod : ",8);
    ft_putnbr(mod);

}
