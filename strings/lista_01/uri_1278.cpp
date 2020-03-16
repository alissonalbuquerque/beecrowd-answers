
#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

int main() {

    string saida = "";
    
    int n;
    // while(cin >> n && n != 0) {

    //     cin.ignore();

    //     string palavra;
        vector<string> texto;

        // texto.push_back("     ROMEO      AND");
        texto.push_back("      JULIET WERE  ");
        // texto.push_back("        IN LOVE    ");

    //     for(int i = 0; i < n; i++) {
    //         getline(cin, palavra);
    //         texto.push_back(palavra);
    //     }

        // texto = justificadorII(justificadorI(texto));
        texto = justificadorI(texto);
    // }

    for(int i = 0; i < texto.size(); i++) {
        cout << texto[i] << endl;
    }

    cout << saida << endl;

    return 0;
}
