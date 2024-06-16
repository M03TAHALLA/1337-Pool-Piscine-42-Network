#include<unistd.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str){
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
    
}
int is_valid_base(char *base) {
    int len = ft_strlen(base);
    if (len <= 1) return 0;

    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-') return 0;
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) return 0;
        }
    }
    return 1;
}
int get_base_value(char c, char *base) {
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == c) return i;
    }
    return -1;
}
int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base)) return 0;

    int base_len = ft_strlen(base);
    int i = 0;
    while (str[i] <= 32) i++; // skip whitespace

    int sign = 1;
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') sign = -sign;
        i++;
    }

    int result = 0;
    int value;
    while ((value = get_base_value(str[i], base)) != -1) {
        result = result * base_len + value;
        i++;
    }

    return result * sign;
}

int main() {
    printf("%d\n", ft_atoi_base(" ---+--+1234ab567", "0123456789")); 
    printf("%d\n", ft_atoi_base("   -110", "01"));                     
    printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));           
    printf("%d\n", ft_atoi_base("poney", "poneyvif"));                 
    printf("%d\n", ft_atoi_base("   ---+---0", "0123456789"));         
    return 0;
}