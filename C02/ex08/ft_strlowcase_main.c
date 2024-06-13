#include<unistd.h>


char *ft_strlowcase(char *str){
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z'){
            str = str + 1 ; 
        }else{
        *str = *str + 32;
        str = str + 1 ; 
        }
    }

    return str;
}
void main(){
    

    char str[] ="HELLO";
    ft_strlowcase(str);
    int i = 0 ;
    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
    
    char str2[] ="hEllo";
    ft_strlowcase(str2);
     i = 0 ;
    while (str2[i] != '\0')
    {
        write(1,&str2[i],1);
        i++;
    }

    
}