
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max_len(vector<string> texto) {

    int len = 0;
    for(int i = 0; i < texto.size(); i++){
        if(texto[i].length() > len) {
            len = texto[i].length();
        }
    }

    return len;
}

vector<string> justificador0(vector<string> texto) {

    string temp;
    vector<string> aux;

    bool corte = false;

    size_t pos_inicial = 0, pos_final = 0;

    for(int i = 0; i < texto.size(); i++) {

        corte = false;

        for(int j = 0; j < texto[i].length(); j++) {


            if(texto[i][j] != ' ' && corte == false) {

                pos_inicial = j;

                for(int k = texto[i].length()-1; k >= 0; k--) {

                    if(texto[i][k] != ' ') {

                        pos_final = k + 1;
                        temp = texto[i].substr(pos_inicial, pos_final - pos_inicial);
                        aux.push_back(temp);

                        corte = true;

                        break;
                    }
                }

            }

        }

    }  

    return aux;
}

vector<string> justificadorI(vector<string> texto) {

    string temp;
    vector<string> aux;

    size_t pos_inicial = 0, pos_final = 0;

    for(int i = 0; i < texto.size(); i++) {

        temp = "";
        pos_inicial = 0;
        pos_final = 0;

        while( (pos_final = texto[i].find(" ", pos_inicial)) != string::npos ) {
            
            temp += texto[i].substr(pos_inicial, pos_final - pos_inicial);
            temp += " ";

            pos_inicial = pos_final;

            for(int j = pos_inicial; j < texto[i].length(); j++) {
                if(texto[i][j] != ' ') {
                    pos_inicial = j;
                    break;
                }
            }
        }

        temp += texto[i].substr(pos_inicial);
        aux.push_back(temp);
    }

    return aux;
}

vector<string> justificadorII(vector<string> texto) {

    string espacos = "                                                  ";
    int len = max_len(texto);

    for(int i = 0; i < texto.size(); i++) {
        
        if(texto[i].length() < len) {
            texto[i] = espacos.substr(0, len - texto[i].length()) + texto[i] + "\n";
        } else {
            texto[i] = texto[i] + "\n";
        }

    }

    texto[texto.size()-1] = texto[texto.size()-1] + "\n";

    return texto;
}

int main() {

    string saida = "";
    
    int n;
    while(cin >> n && n != 0) {

        cin.ignore();

        string palavra;
        vector<string> texto;

        for(int i = 0; i < n; i++) {
            getline(cin, palavra);
            texto.push_back(palavra);
        }

        texto = justificador0(texto);
        texto = justificadorI(texto);
        texto = justificadorII(texto);

        for(int i = 0; i < texto.size(); i++) {
            saida += texto[i];
        }

    }

    saida = saida.substr(0, saida.length()-2);

    cout << saida << endl;

    return 0;
}
