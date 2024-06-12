#include<unistd.h>

void ft_print_comb2(void){
    int a = '0';
    int b = '0';
    int c = '0';
    int d = '1';

    while (a <= '9')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    write(1,&a,1);
                    write(1,&b,1);
                    write(1,&c,1);
                    write(1,&d,1);
                    write(1,", ",1);
                    d++;
                }
                c++;
                d = '1';
            }
            b++;
            c = '0';
        }
        a++;
        b = '0';
    }
    
}

void main(){
    ft_print_comb2();
}