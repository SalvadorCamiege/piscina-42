#include <unistd.h>

int main(){
    ft_putchar('A');

}


void ft_putchar(char c){
     write(1, &c, 1);
}
