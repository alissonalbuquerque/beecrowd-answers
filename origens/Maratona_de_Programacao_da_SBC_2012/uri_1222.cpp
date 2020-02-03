
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n, l, c;
    string conto;

    int linhas, limite_linha, paginas, espaco = 1;

    while( cin >> n >> l >> c ) {

        linhas = 1, limite_linha = 0, paginas = 0;
        vector<string> palavras;

        for(int i = 0; i < n; i++) {
            cin >> conto;
            palavras.push_back(conto);
        }

        int cont = 0;
        while( cont < n ) {

            if( (limite_linha + palavras[cont].length() + espaco) <= c || (limite_linha + palavras[cont].length()) <= c ) {

                limite_linha += palavras[cont].length() + espaco;
                cont++;

            } else {

                linhas++;
                limite_linha = 0;
                limite_linha = palavras[cont].length() + espaco;
                cont++;

            }

        }

        paginas = std::ceil( (float) linhas / (float) l );

        cout << paginas << endl;
    }

    return 0;
}