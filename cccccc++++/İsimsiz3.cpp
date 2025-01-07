#include <iostream>
#include <string>
using namespace std;

struct Kisi {
    string ad_soyad;
    string adres;
    string telefon_no;
};

struct Gonderi {
    int gonderi_no;
    double agirlik;
    double hacim;
    char garanti; 
    double ucret;
    Kisi gonderen;
    Kisi alici;
};

int main() {
			setlocale(LC_ALL, "Turk�sh");

    Gonderi gonderiler[5];

    for (int i = 0; i < 5; i++) {
        cout << "G�nderi " << i + 1 << " bilgilerini giriniz:\n";
        cout << "G�nderi No, A��rl�k, Hacim, Garanti (E/H), �cret: ";
        cin >> gonderiler[i].gonderi_no >> gonderiler[i].agirlik >> gonderiler[i].hacim
            >> gonderiler[i].garanti >> gonderiler[i].ucret;

        cout << "G�nderen Ad�-Soyad�, Adresi, Telefon No: ";
        cin.ignore();
        getline(cin, gonderiler[i].gonderen.ad_soyad);
        getline(cin, gonderiler[i].gonderen.adres);
        getline(cin, gonderiler[i].gonderen.telefon_no);

        cout << "Al�c� Ad�-Soyad�, Adresi, Telefon No: ";
        getline(cin, gonderiler[i].alici.ad_soyad);
        getline(cin, gonderiler[i].alici.adres);
        getline(cin, gonderiler[i].alici.telefon_no);
    }

    for (int i = 0; i < 5; i++) {
        cout << "\nG�nderi " << i + 1 << " Bilgileri:\n";
        cout << "G�nderi No: " << gonderiler[i].gonderi_no
             << ", A��rl�k: " << gonderiler[i].agirlik << " kg, Hacim: "
             << gonderiler[i].hacim << " m3, Garanti: " << gonderiler[i].garanti
             << ", �cret: " << gonderiler[i].ucret << " TL\n";

        cout << "G�nderen - Ad: " << gonderiler[i].gonderen.ad_soyad
             << ", Adres: " << gonderiler[i].gonderen.adres
             << ", Telefon: " << gonderiler[i].gonderen.telefon_no << endl;

        cout << "Al�c� - Ad: " << gonderiler[i].alici.ad_soyad
             << ", Adres: " << gonderiler[i].alici.adres
             << ", Telefon: " << gonderiler[i].alici.telefon_no << endl;
    }

    return 0;
}

