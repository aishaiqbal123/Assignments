#include <iostream>
using namespace std;
int main() {
    int temp;
    int a[6] = {60,47,96, 11, 4, 2};
    for (int i = 0 ; i < 6; i++){
        for (int j = 0; j < 5; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int k=0; k < 6; k++){
        cout << a[k] <<"  ";
    }
    return 0;
}