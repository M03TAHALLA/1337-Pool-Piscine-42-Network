#include<unistd.h>

void ft_print_numbers(void){
    int number = 0;

    while (number <= 9)
    {
        number = number + '0';
        write(1,&number,1);
        number = number - '0';
        number++;
    }
    
}

void main(){
    ft_print_numbers();
}