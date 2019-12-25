
#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1, str2, str_out = "";
    int n, len;

    cin >> n;

    while(n--) {

        cin >> str1 >> str2;

        str1.length() < str2.length()? len = str1.length() : len = str2.length();

        for(int i = 0; i < len; i++) {
            str_out += str1[i];
            str_out += str2[i];
        }

        str1.length() < str2.length()? str_out += str2.substr(len) : str_out += str1.substr(len);

        cout << str_out << endl;
        str_out = "";

    }

    return 0;
}

/*
    --------------------
    Entrada:
        2
        Tpo oCder
        aa bb
    Saída:
        TopCoder
        abab
    --------------------

*/