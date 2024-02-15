#include <unistd.h>
#include <stdio.h>

void reverse(void)
{
    int i = 122;
    while (i >= 97)
    {
        char c = i;
        write(1, &c, 1);
        i--;
    }
}
	int main(){
	reverse();
	return 0;
}
