#include<unistd.h>
int ft_strlen(char *str){
    int count = 1 ;

    while (*str != '\0')
    {
       count++;
    }
    return --count;
}