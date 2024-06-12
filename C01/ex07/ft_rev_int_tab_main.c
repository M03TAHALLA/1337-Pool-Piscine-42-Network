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
void ft_rev_int_tab(int *tab, int size){
    int temp ;
    int i = 0 ;
    int j = size - 1 ;
    while (i < j)
    {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
    }
    
}

void main(){
    int c[] = {1,5,4,5};
    int i = 0;
    int size  = 4 ;
    while (i <= size-1)
    {
        ft_putnbr(c[i]);
        i++;
    }

    ft_rev_int_tab(c,size);
     i = 0;
         write(1," -> ",4);

     while (i <= size-1)
    {
        ft_putnbr(c[i]);
        i++;
    }

    
}

