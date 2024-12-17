#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai N: ";
    cin >> n;


    cout << "Bilangan dari 1 hingga " << n << " adalah : ";
    for (int i = 1; i <= n; i++) {
        cout << i << " " ;
    }

    cout << endl;
    return 0;
}
