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
int ft_ultimate_range(int **range, int min, int max){

    int size = max - min ;

    if(min >= max){
        *range = NULL;
        return 0;
    }

    *range = (int *)malloc((size-1) * sizeof(int));

    if(*range == NULL){
        return -1;
    }
    int  i = 0;
    while (min < max)
    {
        (*range)[i] = min ;
        min++;
        i++;
    }

        return size;
    
}

int main(){
    int *range ;
    int min = 5 ;
    int max = 10 ;
    int size = ft_ultimate_range(&range,min,max);
    write(1,"size : ",7);
    ft_putnbr(size);
    write(1,"\n",1);
    int i = 0;
    while (i < size)
    {
        ft_putnbr(range[i]);
        write(1,", ",1);
        i++;
    }
    
}