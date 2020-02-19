
#include <iostream>

using namespace std;

int main() {

    int n, x, y;
    cin >> n >> x >> y ;

    double icm = (double)(n) / (double)(x + y);

    cout.precision(2);
    cout << std::fixed << icm << endl;

    return 0;
}
