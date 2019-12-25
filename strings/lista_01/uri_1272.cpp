
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string input;
    string output = "";

    int query;
    cin >> query;
    cin.ignore();

    while(query--) {

        vector<string> palavras;

        std::getline(cin, input);

        int i = 0, cont = 0;
        while(i < input.length()) {

            if(input[i] != ' ') {

                for(int j = i; j < input.length(); j++) {
                    if(input[j] != ' ') {
                        cont++;
                    } else {
                        break;
                    }
                }

                palavras.push_back(input.substr(i, cont));
                i += cont;
                cont = 0;

            } else {

                i++;

            }

        }

        for(int i = 0; i < palavras.size(); i++) {
            output += palavras[i][0];
        }

        cout << output << endl;
        output = "";

    }

    return 0;
}

/*
    --------------------
    Entrada:
        4
        compete online design event rating
        u   r i o    n l  i n  e   
        
        round  elimination during onsite  contest
    Saída:
        coder
        urionline

        redoc
    --------------------
*/