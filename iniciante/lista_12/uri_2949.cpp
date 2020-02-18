
#include <iostream>

using namespace std;

int main() {

    int n;
    int alistados[5] = {0, 0, 0, 0, 0}; 
    string nome;

    cin >> n;
    cin.ignore();
    while(n--) {
        
        getline(cin, nome);

        switch(nome[nome.size()-1]) {

            case 'X':
                alistados[0]++;
                break;
            case 'H':
                alistados[1]++;
                break;
            case 'E':
                alistados[2]++;
                break;
            case 'A':
                alistados[3]++;
                break;
            case 'M':
                alistados[4]++;
                break;
            default:
                break;

        }
    }

    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n", alistados[0], alistados[1], alistados[2], alistados[3], alistados[4]);

    return 0;
}
