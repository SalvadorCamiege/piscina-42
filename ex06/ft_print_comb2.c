#include <unistd.h>

void ft_putchar(char valor) {
    write(1, &valor, 1);
}

void ft_mostra(int valor) {
    int x;
    int y;
    if (valor > 9) {
        y = valor / 10;
        x = valor % 10;
        ft_putchar(y + '0');
        ft_putchar(x + '0');
    } else {
        ft_putchar('0');
        ft_putchar(valor + '0');
    }
}

void ft_resultados(int x, int y) {
    ft_mostra(x);
    ft_putchar(' ');
    ft_mostra(y);

    if (x < 98 || y < 99) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2() {
    int x;
    int y;

    x = 0;
    while (x <= 98) {
        y = x + 1;
        while (y <= 99) {
            ft_resultados(x, y);
            y++;
        }
        x++;
    }
}

int main() {
    ft_print_comb2();
    return 0;
}

