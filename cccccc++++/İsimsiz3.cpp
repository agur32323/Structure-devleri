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
			setlocale(LC_ALL, "Turkýsh");

    Gonderi gonderiler[5];

    for (int i = 0; i < 5; i++) {
        cout << "Gönderi " << i + 1 << " bilgilerini giriniz:\n";
        cout << "Gönderi No, Aðýrlýk, Hacim, Garanti (E/H), Ücret: ";
        cin >> gonderiler[i].gonderi_no >> gonderiler[i].agirlik >> gonderiler[i].hacim
            >> gonderiler[i].garanti >> gonderiler[i].ucret;

        cout << "Gönderen Adý-Soyadý, Adresi, Telefon No: ";
        cin.ignore();
        getline(cin, gonderiler[i].gonderen.ad_soyad);
        getline(cin, gonderiler[i].gonderen.adres);
        getline(cin, gonderiler[i].gonderen.telefon_no);

        cout << "Alýcý Adý-Soyadý, Adresi, Telefon No: ";
        getline(cin, gonderiler[i].alici.ad_soyad);
        getline(cin, gonderiler[i].alici.adres);
        getline(cin, gonderiler[i].alici.telefon_no);
    }

    for (int i = 0; i < 5; i++) {
        cout << "\nGönderi " << i + 1 << " Bilgileri:\n";
        cout << "Gönderi No: " << gonderiler[i].gonderi_no
             << ", Aðýrlýk: " << gonderiler[i].agirlik << " kg, Hacim: "
             << gonderiler[i].hacim << " m3, Garanti: " << gonderiler[i].garanti
             << ", Ücret: " << gonderiler[i].ucret << " TL\n";

        cout << "Gönderen - Ad: " << gonderiler[i].gonderen.ad_soyad
             << ", Adres: " << gonderiler[i].gonderen.adres
             << ", Telefon: " << gonderiler[i].gonderen.telefon_no << endl;

        cout << "Alýcý - Ad: " << gonderiler[i].alici.ad_soyad
             << ", Adres: " << gonderiler[i].alici.adres
             << ", Telefon: " << gonderiler[i].alici.telefon_no << endl;
    }

    return 0;
}

