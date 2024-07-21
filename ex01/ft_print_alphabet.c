#include <unistd.h>


int main(void){
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void){
    char letra = 'a';
    while(letra <= 'z'){
        write(1, &letra, 1);
        letra++;
    }
}

