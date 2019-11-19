
#include <iostream>
#include <string>

using namespace std;

int main() {

    int cont;
    string a;
    string b;

    cin >> cont;

    while(cont--) {

        cin >> a >> b;

        if(a.length() >= b.length()) {

            int i = a.length() - b.length();

            a.substr(i) == b? cout << "encaixa" << endl : cout << "nao encaixa" << endl;

        } else {

            cout << "nao encaixa" << endl;

        }

    }

    return 0;
}

/*
    --------------------
    Entrada:
        4
        56234523485723854755454545478690 78690
        5434554 543
        1243 1243
        54 64545454545454545454545454545454554
    Saída:
        encaixa
        nao encaixa
        encaixa
        nao encaixa

    --------------------
*/