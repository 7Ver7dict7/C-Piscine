#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
	int i= 97;
	while (i >= 97 && i <= 122){
		char c = i;
		write(1, &c, 1);
		i++;
	}
}
/*
 *void ft_print_alphabet(void)
 {
	int i;	
 	for (i = 97 , i<123 , i++){
		char c = i;
		write(1, &c, 1);
	}	
 }
 */

int main(){
	ft_print_alphabet();
}

