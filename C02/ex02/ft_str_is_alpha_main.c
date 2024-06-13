#include<unistd.h>
#include<stdbool.h>
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
int ft_str_is_alpha(char *str){
    int is_alpha = 1 ;
    while (*str != '\0')
    {
        if((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z') ){
            is_alpha = 0 ;
        }
        
        str = str + 1 ;
    }
    
    return is_alpha ;
    
}

void main(){
    char str[] = "Hello";
    char str2[] = "Hello5";
    char str3[] = "Hello&";

    ft_putnbr(ft_str_is_alpha(str));
    ft_putnbr(ft_str_is_alpha(str2));
    ft_putnbr(ft_str_is_alpha(str3));


    


}