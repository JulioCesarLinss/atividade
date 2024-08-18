#include <stdio.h>

int main() {
    int somatorio = 0;

    for(int index = 11; index < 1000; index += 2) { 
        somatorio += index;
    }

    printf("%d\n", somatorio);

    return 0;
}
