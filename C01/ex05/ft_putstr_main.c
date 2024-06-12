#include<unistd.h>

void ft_putstr(char *str){
    while (*str != '\0')
    {
        write(1,str,1);
        str = str + 1;
    }
    
}

void main(){
    char c[] = "1337 Ncha2llah";
    ft_putstr(c);
}