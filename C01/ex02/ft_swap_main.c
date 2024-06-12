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
void ft_swap(int *a, int *b){
    int temp ; 
    temp = *a ;
    *a = *b ;
    *b = temp;
}

void main(){
    int a = 5;
    int b = 6 ;
    write(1,"a : ",4);
    ft_putnbr(a);
    write(1,"  b : ",6);
    ft_putnbr(b);
    ft_swap(&a,&b);
    write(1," -> ",4);
    write(1,"a : ",4);
    ft_putnbr(a);
    write(1,"  b : ",6);
    ft_putnbr(b);

    


}