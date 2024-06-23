#include<unistd.h>
#include<stdlib.h>
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
int *ft_range(int min, int max){
    int size = (max-1) - min ;

    if(min >= max){
        return NULL;
    }
    int *range = (int *)malloc(size * sizeof(int));
    int  i = 0;
    while (min < max)
    {
        range[i] = min ;
        min++;
        i++;
    }

    return range;
 
}

int main(){

    int min = 5 ;
    int max = 10 ;
    int size = max - min ;
    int i = 0;

    int *range = ft_range(min,max);

    while (i < size)
    {
        ft_putnbr(*range);
        write(1," - ",3);
        range++;
        i++;
    }
    free(range);
    
}