#include <iostream>
using namespace std;

int main() {
    int Array1[] = {1, 2, 3, 4, 5};
    int newSize = 8;
    int Array2[] = {6, 7, 8};

    int merged[newSize];
    
    copy(begin(Array1), end(Array1), merged);
    copy(begin(Array2), end(Array2), merged + sizeof(Array1) / sizeof(Array1[0]));

    cout << "Elements in the merged array: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}