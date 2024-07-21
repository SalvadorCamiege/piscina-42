#include <unistd.h>

int main(){
     ft_print_numbers();

}


void ft_print_numbers(void){
char num = '0';
      while(num <= '9'){
            write(1,&num,1);
               num++;
      }


}
