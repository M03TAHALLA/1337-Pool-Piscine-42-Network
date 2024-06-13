#include<unistd.h>
char *ft_strupcase(char *str){

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z'){
            str = str + 1 ;
        }else{
        *str = *str - 32;
        str = str + 1 ;
        } 
    }

    return str;
    
}

void main(){
    

    char str[] ="hello";
    ft_strupcase(str);
    int i = 0 ;
    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
    
    char str2[] ="hEllO";
    ft_strupcase(str2);
     i = 0 ;
    while (str2[i] != '\0')
    {
        write(1,&str2[i],1);
        i++;
    }

    
}