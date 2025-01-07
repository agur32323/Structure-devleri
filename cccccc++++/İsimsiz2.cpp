#include <iostream>
#include <string>
using namespace std;

struct Kumas {
    string ipliktipi;
    float dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};

struct Iskelet {
    string malzeme;
    string birlestirme;
    string tarz;
    string boyut;
    int miktar;
};

struct Mobilya {
    Kumas kaplama;
    Iskelet malzeme;
    int fiyat;
    int adet;
};

int main() {
	
		setlocale(LC_ALL, "Turkýsh");

    Mobilya urunler[10];
    int toplamFiyat = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Mobilya " << i + 1 << " bilgilerini giriniz:\n";

        cout << "Kumas bilgileri (iplik tipi, dm2 agirlik, dokuma tipi, renk, miktar): ";
        cin >> urunler[i].kaplama.ipliktipi >> urunler[i].kaplama.dm2agirlik
            >> urunler[i].kaplama.dokumatipi >> urunler[i].kaplama.renk >> urunler[i].kaplama.miktar;

        cout << "Iskelet bilgileri (malzeme, birlestirme, tarz, boyut, miktar): ";
        cin >> urunler[i].malzeme.malzeme >> urunler[i].malzeme.birlestirme
            >> urunler[i].malzeme.tarz >> urunler[i].malzeme.boyut >> urunler[i].malzeme.miktar;

        cout << "Fiyat ve adet: ";
        cin >> urunler[i].fiyat >> urunler[i].adet;

        toplamFiyat += urunler[i].fiyat;
    }

    for (int i = 0; i < 10; i++) {
        cout << "\nMobilya " << i + 1 << " Bilgileri:\n";
        cout << "Kumas - Iplik Tipi: " << urunler[i].kaplama.ipliktipi
             << ", Agirlik: " << urunler[i].kaplama.dm2agirlik << ", Dokuma Tipi: "
             << urunler[i].kaplama.dokumatipi << ", Renk: " << urunler[i].kaplama.renk
             << ", Miktar: " << urunler[i].kaplama.miktar << endl;

        cout << "Iskelet - Malzeme: " << urunler[i].malzeme.malzeme
             << ", Birlestirme: " << urunler[i].malzeme.birlestirme << ", Tarz: "
             << urunler[i].malzeme.tarz << ", Boyut: " << urunler[i].malzeme.boyut
             << ", Miktar: " << urunler[i].malzeme.miktar << endl;

        cout << "Fiyat: " << urunler[i].fiyat << " TL, Adet: " << urunler[i].adet << endl;
    }

    cout << "\nToplam Fiyat: " << toplamFiyat << " TL\n";

    return 0;
}

