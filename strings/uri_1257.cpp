
#include <iostream>
#include <string>

using namespace std;

int pos(char c) {
    return (int) (c - 65);
}

int main() {

    int q, n, valor = 0, somatorio = 0;
    string str;
    
    cin >> q;
    while(q--) {

        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> str;
            for(int j = 0; j < str.size(); j++) {
                valor = pos(str[j]) + i + j;
                somatorio += valor;
            }
        }

        cout << somatorio << endl;
        somatorio = 0;
    }

    return 0;
}

/*
    --------------------
    Entrada:
        5
        2
        CBA
        DDD
        1
        Z
        6
        A
        B
        C
        D
        E
        F
        6
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        ABCDEFGHIJKLMNOPQRSTUVWXYZ
        1
        ZZZZZZZZZZ
    Saída:
        21
        25
        30
        4290
        295
    --------------------
*/