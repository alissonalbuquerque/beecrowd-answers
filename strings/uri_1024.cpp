
#include <iostream>
#include <string>

using namespace std;

int main() {

    int cont = 0;
    string texto;

    cin >> cont;
    cin.ignore();

    while(cont--) {

        std::getline(cin, texto);

        for(int i = 0; i < texto.length(); i++) {
            if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z') {
                texto[i] += 3;
            }
        }

        char temp = ' ';
        int len = texto.size() - 1;
        for(int i = 0; i < texto.size() / 2; i++) {
            temp = texto[len - i];
            texto[len - i] = texto[i];
            texto[i] = temp;
        }


        for(int i = texto.size() / 2; i < texto.size(); i++) {
            texto[i]--;
        }

        cout << texto << endl;

    }

    return 0;
}

/*
    --------------------
    Entrada:
        4
        Texto #3
        abcABC1
        vxpdylY .ph
        vv.xwfxo.fd

    Saída:
        3# rvzgV
        1FECedc
        ks. \n{frzx
        gi.r{hyz-xx
        
    --------------------

*/