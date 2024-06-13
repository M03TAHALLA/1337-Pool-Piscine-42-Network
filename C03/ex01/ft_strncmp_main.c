#include<unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i = 0 ;
    int is_cmp = 1 ;
    while (i < n)
    {
        if(*s1 != *s2){
            is_cmp = 0 ;
        }
        s1 = s1 + 1 ;
        s2 = s2 + 1;

        i++;
    }

    return is_cmp;
    
}

void main(){
    char str[] = "Heblo5";
    char str2[] = "Hello";

    int same = ft_strncmp(str,str2,3);

    if(same == 0){
        write(1,"Note Identique !",16);
    }
    if(same == 1){
    write(1,"Identique !",11);
    }

}