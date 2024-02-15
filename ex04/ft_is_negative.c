#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n){
    if (n >= 0){
        char c = 80;
        write(1, &c, 1);
    } else {
        char c = 78;
        write(1, &c, 1);
    }

}

int main(){
    ft_is_negative(12);
    return 0;
}