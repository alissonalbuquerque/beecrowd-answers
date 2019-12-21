
#include <iostream>
#include <string>

using namespace std;

#define DOIS_LEDS   2
#define TRES_LEDS   3
#define QUATRO_LEDS 4
#define CINCO_LEDS  5
#define SEIS_LEDS   6
#define SETE_LEDS   7

int main() {

    int consulta, leds;
    string entrada;

    cin >> consulta;

    while(consulta--) {

        leds = 0;
        cin >> entrada;

        for(int i = 0; i < entrada.length(); i++) {
            
            if(entrada[i] == '0' || entrada[i] == '6' || entrada[i] == '9') {
                leds += SEIS_LEDS;
            } else if(entrada[i] == '2' || entrada[i] == '3' || entrada[i] == '5') {
                leds += CINCO_LEDS;
            } else if(entrada[i] == '8') {
                leds += SETE_LEDS;
            } else if(entrada[i] == '7') {
                leds += TRES_LEDS;
            } else if(entrada[i] == '4') {
                leds += QUATRO_LEDS;
            } else {
                leds += DOIS_LEDS;
            }

        }

        cout << leds << " leds" << endl;

    }

    return 0;
}

/*
    --------------------
    Entrada:
        3
        115380
        2819311
        23456
    Saída:
        27 leds
        29 leds
        25 leds
    --------------------

*/