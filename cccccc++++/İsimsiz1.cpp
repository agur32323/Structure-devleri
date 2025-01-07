#include <iostream>
#include <string>
using namespace std;

struct Otomobil {
    string marka;
    string model;
    int yil;
    char yakit; 
    int km;
    double fiyat;
};

int main() {
	
	setlocale(LC_ALL, "Turk�sh");
    Otomobil binek, suv, ticari;

    binek = {"Toyota", "Corolla", 2020, 'B', 45000, 350000};
    suv = {"Ford", "Kuga", 2021, 'D', 30000, 450000};
    ticari = {"Volkswagen", "Caddy", 2019, 'D', 60000, 250000};

    cout << "Binek Ara�:\nMarka: " << binek.marka << "\nModel: " << binek.model 
         << "\nY�l: " << binek.yil << "\nYak�t: " << binek.yakit 
         << "\nKM: " << binek.km << "\nFiyat: " << binek.fiyat << " TL\n\n";

    cout << "SUV:\nMarka: " << suv.marka << "\nModel: " << suv.model 
         << "\nY�l: " << suv.yil << "\nYak�t: " << suv.yakit 
         << "\nKM: " << suv.km << "\nFiyat: " << suv.fiyat << " TL\n\n";

    cout << "Ticari Ara�:\nMarka: " << ticari.marka << "\nModel: " << ticari.model 
         << "\nY�l: " << ticari.yil << "\nYak�t: " << ticari.yakit 
         << "\nKM: " << ticari.km << "\nFiyat: " << ticari.fiyat << " TL\n";

    return 0;
}

