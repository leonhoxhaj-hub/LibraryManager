#include <iostream>
using namespace std;


void shtoLiber();   
void shfaqLibrat();   
void kerkoFshi();    
void dokumentacion(); 

int main() {
    int zgjedhja;

    do {
        cout << "\n--- Menaxhimi i Librave ---\n";
        cout << "1. Shto liber\n";
        cout << "2. Shfaq librat\n";
        cout << "3. Kerko/Fshi liber\n";
        cout << "4. Dokumentacion\n";
        cout << "5. Dil\n";
        cout << "Zgjidh nje opsion: ";
        cin >> zgjedhja;
        cin.ignore(); 

        switch(zgjedhja) {
            case 1: shtoLiber(); break;      
            case 2: shfaqLibrat(); break;     
            case 3: kerkoFshi(); break;       
            case 4: dokumentacion(); break;   
            case 5: cout << "Duke dal...\n"; break;
            default: cout << "Opsion i pavlefshem.\n";
        }
    } while (zgjedhja != 5);

    return 0;
}
