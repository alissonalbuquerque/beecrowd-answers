
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int cont, input; 
    vector<int> pares;
    vector<int> impares;
    string saida = "";

    cin >> cont;
    for(int i = 0; i < cont; i++) {
        cin >> input;
        input % 2 == 0? pares.push_back(input):impares.push_back(input);
    }

    std::sort(pares.begin(), pares.end());
    std::sort(impares.begin(), impares.end());

    for(int i = 0; i < pares.size(); i++) {
        saida += std::to_string(pares[i]) + "\n";
    }

    for(int j = impares.size()-1; j >= 0; j--) {
        saida += std::to_string(impares[j]) + "\n";
    }

    cout << saida;

    return 0;
}

/*
    --------------------
    Entrada:
        10
        4
        32
        34
        543
        3456
        654
        567
        87
        6789
        98

    Saída:
        4
        32
        34
        98
        654
        3456
        6789
        567
        543
        87
        
    --------------------

*/