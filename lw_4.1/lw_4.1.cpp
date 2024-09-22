#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    // 1. Цикл while
    S = 1;
    i = N;
    while (i <= 10) {
        S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
        i++;
    }
    cout << "Result using while: " << S << endl;

    // 2. Цикл do...while
    S = 1;
    i = N;
    do {
        S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
        i++;
    } while (i <= 10);
    cout << "Result using do...while: " << S << endl;


    // 3. Цикл for (збільшення)
    S = 1;
    for (i = N; i <= 10; i++) {
        S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
    }
    cout << "For increment: " << S << endl;

    // 4. Цикл for (зменшення)
    S = 1;
    for (i = 10; i >= N; i--) {
        S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
    }
    cout << "For decrement: " << S << endl;

    return 0;
}
