#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void shtoLiber() {
    ofstream file("librat.txt", ios::app);
    string titull, autor;
    cout << "Shkruaj titullin e librit: ";
    getline(cin, titull);
    cout << "Shkruaj emrin e autorit: ";
    getline(cin, autor);
    file << titull << ";" << autor << endl;
    file.close();
    cout << "Libri u shtua me sukses!\n";
}
