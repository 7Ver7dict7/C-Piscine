#include <stdio.h>
#include <unistd.h>

void ft_print_number(void){
    int i = 48;
    while (i<=57){
        char c = i;
        write(1, &c, 1);
        i++;
    }
}
int main(){
    ft_print_number();
    return 0;
}
