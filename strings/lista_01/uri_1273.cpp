
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> justificador(vector<string> palavras) {

    string espaco = " ";
    string aux = "";

    int max_len = 0;
    for(int i = 0; i < palavras.size(); i++) {
        if(max_len < palavras[i].length()) {
            max_len = palavras[i].length();
        }
    }

    for(int j = 0; j < palavras.size(); j++) {

        if(max_len - palavras[j].length() != 0) {

            for(int k = 0; k < max_len - palavras[j].length(); k++) {
                aux += espaco;
            }

            palavras[j] = aux + palavras[j];
            aux = "";

        }

    }

    return palavras;
}

int main() {

    string saida;

    int n;
    while(cin >> n && n != 0) {
        
        cin.ignore();

        string palavra;
        vector<string> palavras;

        for(int i = 0; i < n; i++) {
            cin >> palavra;
            palavras.push_back(palavra);
        }

        palavras = justificador(palavras);

        for(int j = 0; j < palavras.size(); j++) {
            saida += palavras[j] + "\n";
        }
        saida += "\n";

    }
    
    cout << saida.substr(0, saida.length()-2) << endl;

    return 0;
}
