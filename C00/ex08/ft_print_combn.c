#include<unistd.h>
void print_combn(char *num , int num_size , int index , char digit){
    if(num_size == index){
        write(1,num,num_size);
        if(digit - '0' < (10 - num_size)){
            write(1,", ",2);
        }
    }else{
        while (digit - '0' < (10-num_size)+index)
        {
            num[index] = digit;
            print_combn(num,num_size,index+1,digit+1);
            digit++;
        }
        
    }
}

void ft_print_combn(int n){
   char c[9];
   print_combn(c,n,0,'0');
}