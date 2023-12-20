#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    while (N > 1) {
        bool flag = true;
        for (int i = 2; i * i <= N; ++i) {
            if (N % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            cout << "Largest prime number less than or equal to N: " << N << endl;
            return 0;
        }

        N--;
    }
    cout << "No prime number found less than number" << endl;
    return 0;
}