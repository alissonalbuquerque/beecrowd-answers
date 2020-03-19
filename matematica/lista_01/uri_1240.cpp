
#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, a, b;
    string strA, strB;

    cin >> n;
    while(n--) {

        cin >> a >> b;
        strA = std::to_string(a);
        strB = std::to_string(b);

        if(a >= b) {
            strA.substr(strA.size() - strB.size()) == strB? puts("encaixa") : puts("nao encaixa");
        } else {
            cout << "nao encaixa" << endl;
        }

    }

    return 0;
}
