#include <stdio.h>
#include <unistd.h>

int main() {
    while(1) {  // Loop infinito
        printf("Compiling\n");
        sleep(5);  // Pausa de 20 segundos
    }
    return 0;
}
