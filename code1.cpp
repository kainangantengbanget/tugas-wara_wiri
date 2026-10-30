#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> buah = {"mangga", "jeruk"};

    cout << buah[0] << endl; // mengakses menggunakan elemen berdasarkan indeks

    buah.insert(buah.begin(), "apple");
    buah.insert(buah.begin() +2, "semangka");
    buah.push_back("pisang");
    cout << "setelah ditambahkan: ";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    buah.erase(buah.begin());
    buah.erase(buah.begin() + 1);
    buah.pop_back();
    cout << "setelah dihapus: ";
    for(string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}