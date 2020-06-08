
#include <iostream>
#include <string>
#include <vector>

using namespace std;

double porcentagem(string str) {

    double resultado;

    double p = 0, a = 0;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'P') {
            p++;
        } else if(str[i] == 'A') {
            a++;
        }
    }

    if( a + p == 0 ) {
        resultado = 1;
    } else {
        resultado = (p) / (p+a);
    }

    return resultado;
}

void input(vector<string> *nomes, vector<double> *presencas, int n) {

    string aux;

    for(int i = 0; i < n; i++) {
        cin >> aux;
        nomes->push_back(aux);
    }

    for(int j = 0; j < n; j++) {
        cin >> aux;
        presencas->push_back(porcentagem(aux));
    }

}

vector<string> output(vector<string> nomes, vector<double> presencas) {

    vector<string> saida;

    for(int i = 0; i < presencas.size(); i++) {

        if( presencas[i] < 0.75 ) {
            saida.push_back(nomes[i]);
        }

    }

    return saida;
}

int main() {

    int t, n;

    cin >> t;
    while(t--) {

        vector<string> nomes;
        vector<double> presencas;
        vector<string> saida;

        cin >> n;

        input(&nomes, &presencas, n);

        saida = output(nomes, presencas);

        if(saida.size() == 0) {
            cout << endl;
        } else {

            for(int i = 0; i < saida.size()-1; i++) {
                cout << saida[i] << " ";
            }
            cout << saida[saida.size()-1] << endl;
        
        }

    }

    return 0;
}
