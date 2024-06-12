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
int ft_strlen(char *str){
    int count = 1 ;

    while (*str != '\0')
    {
       count++;
       str = str + 1 ;
    }
    return --count;
}

void main(){
    char c[] = "Hello 1337";
    ft_putnbr(ft_strlen(c));
}