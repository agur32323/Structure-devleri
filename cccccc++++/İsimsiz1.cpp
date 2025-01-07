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
	
	setlocale(LC_ALL, "Turkýsh");
    Otomobil binek, suv, ticari;

    binek = {"Toyota", "Corolla", 2020, 'B', 45000, 350000};
    suv = {"Ford", "Kuga", 2021, 'D', 30000, 450000};
    ticari = {"Volkswagen", "Caddy", 2019, 'D', 60000, 250000};

    cout << "Binek Araç:\nMarka: " << binek.marka << "\nModel: " << binek.model 
         << "\nYýl: " << binek.yil << "\nYakýt: " << binek.yakit 
         << "\nKM: " << binek.km << "\nFiyat: " << binek.fiyat << " TL\n\n";

    cout << "SUV:\nMarka: " << suv.marka << "\nModel: " << suv.model 
         << "\nYýl: " << suv.yil << "\nYakýt: " << suv.yakit 
         << "\nKM: " << suv.km << "\nFiyat: " << suv.fiyat << " TL\n\n";

    cout << "Ticari Araç:\nMarka: " << ticari.marka << "\nModel: " << ticari.model 
         << "\nYýl: " << ticari.yil << "\nYakýt: " << ticari.yakit 
         << "\nKM: " << ticari.km << "\nFiyat: " << ticari.fiyat << " TL\n";

    return 0;
}

