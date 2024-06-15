#include <stdio.h>
#include <string.h>

int is_valid_base(char *base) {
    int len = strlen(base);
    if (len <= 1) return 0;

    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-') return 0;
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) return 0;
        }
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base) {
    if (!is_valid_base(base)) return;

    int base_len = strlen(base);
    long num = nbr;
    if (num < 0) {
        putchar('-');
        num = -num;
    }

    char result[64];
    int i = 0;

    if (num == 0) {
        putchar(base[0]);
        return;
    }

    while (num) {
        result[i++] = base[num % base_len];
        num /= base_len;
    }

    while (i--) {
        putchar(result[i]);
    }
}

int main() {
    ft_putnbr_base(123, "0123456789");
    putchar('\n');
    ft_putnbr_base(-123, "0123456789");
    putchar('\n');
    ft_putnbr_base(5, "01");
    putchar('\n');
    ft_putnbr_base(-5, "01");
    putchar('\n');
    ft_putnbr_base(255, "0123456789ABCDEF");
    putchar('\n');
    ft_putnbr_base(-255, "0123456789ABCDEF");
    putchar('\n');
    ft_putnbr_base(0, "poneyvif");
    putchar('\n');
    ft_putnbr_base(-64, "poneyvif");
    putchar('\n');

    return 0;
}
