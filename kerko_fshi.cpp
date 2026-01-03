#include <iostream>
#include <fstream>
#include <vector>
#include<string>
using namespace std;

void kerko_liber() {
    ifstream file("librat.txt");
    string titulli, autori, kerkimi;
    bool gjetur = false;

    cout << "Shkruaj titullin e librit per kerkese: ";
    cin.ignore();
    getline(cin, kerkimi);

    while (getline(file, titulli) && getline(file, autori)) {
        if (titulli == kerkimi) {
            cout << "Libri u gjet!\n";
            cout << "Titulli: " << titulli << endl;
            cout << "Autori: " << autori << endl;
            gjetur = true;
            break;
        }
    }

    if (!gjetur) {
        cout << "Libri nuk u gjet.\n";
    }

    file.close();
}

void fshi_liber() {
    ifstream file("librat.txt");
    vector<string> librat;
    string titulli, autori, kerkimi;

    cout << "Shkruaj titullin e librit per fshirje: ";
    cin.ignore();
    getline(cin, kerkimi);

    bool fshire = false;

    while (getline(file, titulli) && getline(file, autori)) {
        if (titulli != kerkimi) {
            librat.push_back(titulli);
            librat.push_back(autori);
        }
        else {
            fshire = true;
        }
    }

    file.close();

    ofstream out("librat.txt");
    for (int i = 0; i < librat.size(); i++) {
        out << librat[i] << endl;
    }
    out.close();

    if (fshire)
        cout << "Libri u fshi me sukses.\n";
    else
        cout << "Libri nuk u gjet.\n";
}
