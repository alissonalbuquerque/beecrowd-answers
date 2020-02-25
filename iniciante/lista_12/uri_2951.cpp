
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

class Runa {
    public:
        string s;
        int p;
};

int pontos(string s, vector<Runa> runas) {

    int pts = 0;
    for(int i = 0; i < runas.size(); i++) {
        if(runas[i].s == s) {
            pts = runas[i].p;
            break; 
        }
    }

    return pts;  
}

int main() {

    int n, g, x, soma_pontos = 0;
    
    Runa runa;
    vector<Runa> runas;

    cin >> n >> g;
    while(n--) {
        cin >> runa.s >> runa.p;
        runas.push_back(runa);
    }

    cin >> x;
    string s;
    vector<string> runas_recitadas;
    for(int i = 0; i < x; i++) {
        cin >> s;
        runas_recitadas.push_back(s);
    }


    for(int i = 0; i < x; i++) {
        soma_pontos += pontos(runas_recitadas[i], runas);
    }

    cout << soma_pontos << endl;
    soma_pontos >= g? puts("You shall pass!") : puts("My precioooous");

    return 0;
}
