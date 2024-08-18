#include <stdio.h>

int main() {
   for(int index = 3; index <= 200; index += 3) { 
        if (index % 10 != 3) {
            printf("%d,", index); 
        }
    }
    return 0;
}
