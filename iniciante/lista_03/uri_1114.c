
#include <stdio.h>

int main() {

    int senha_correta = 2002, input = 0; 

    while(input != senha_correta) {
        
        scanf("%d", &input); 
        
        if(input == senha_correta) {
            puts("Acesso Permitido");
            break;
        } else {
            puts("Senha Invalida");
        }

    }

    return 0;
}
