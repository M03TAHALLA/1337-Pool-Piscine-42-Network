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
void ft_sort_int_tab(int *tab, int size){
    int i = 0;
    int j = 0 ;
    int temp;

    i = 0 ;
    while (i < size-1)
    {
        j = 0 ;
        while (j < size-i-1)
        {
            if(tab[j] > tab[j+1]){
            temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    
}

void main(){
    int tab[] = {5,4,8,2};
    int size = 4 ;
    int i = 0;
    while (i <= size-1)
    {
        ft_putnbr(tab[i]);
        i++;
    }

    ft_sort_int_tab(tab,size);

    i = 0 ;
             write(1," -> ",4);

    while (i <= size-1)
    {
        ft_putnbr(tab[i]);
        i++;
    }


}