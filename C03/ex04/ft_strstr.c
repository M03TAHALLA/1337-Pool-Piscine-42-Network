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
char ft_strstr(char *str, char *to_find){
    char *pointer_str;
    char *pointer_find ;
    int is_find = 0 ;
    pointer_str = str;

    while (*pointer_str != '\0')
    {
        pointer_find = to_find;

        while (*pointer_find == *pointer_str && *pointer_find != '\0' && *pointer_str != '\0')
        {
            pointer_find++;
            pointer_str++;
        }

        if(*pointer_find == '\0'){
           
            return 'Y';
        }

        pointer_str = pointer_str + 1 ;
        
    }

    return 'N' ;
     

}

void main(){
    char c[] = "1337 School";
    char d[] = "School";

    if(ft_strstr(c,d) == 'Y'){
        write(1,"Sous-chaîne trouvée",21);
    }
    if (ft_strstr(c,d) == 'N')
    {
        write(1,"Sous-chaîne non trouvée",25);
    }
    

}