#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang: ";
    cin >> n;

    int i = 1;
    do {
        int j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= n);

    return 0;
}
