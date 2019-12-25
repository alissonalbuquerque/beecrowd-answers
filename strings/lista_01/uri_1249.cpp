
#include <iostream>
#include <string>

using namespace std;

#define CONST 13
#define DESLOCAMENTO(CHAR, CHAR_MIN, CHAR_MAX) ( (CHAR+CONST > CHAR_MAX)? (CHAR + CONST - CHAR_MAX + CHAR_MIN -1) : (CHAR+CONST) )

int main() {

    string entrada;

    char a = 'a';
    char z = 'z';
    char A = 'A';
    char Z = 'Z';

    while(true) {

        std::getline(cin, entrada);

        if(entrada.length() > 0){

            for(int i = 0; i < entrada.length(); i++) {

                if(entrada[i] >= 'a' && entrada[i] <= 'z') {

                    entrada[i] = DESLOCAMENTO(entrada[i], a, z);

                } else if(entrada[i] >= 'A' && entrada[i] <= 'Z') {

                    entrada[i] = DESLOCAMENTO(entrada[i], A, Z);

                } else {

                    entrada[i] = entrada[i];
                    
                }

            }

            cout << entrada << endl;

        } else {
            break;
        }

    }

    return 0;
}

/*
    --------------------
    Entrada:
        z
        a
        x
        Hello world!
        This is a test message.
        abc123<>,xyz?*$
    Saída:
        m
        n
        k
        Uryyb jbeyq!
        Guvf vf n grfg zrffntr.
        nop123<>,klm?*$
    --------------------
*/