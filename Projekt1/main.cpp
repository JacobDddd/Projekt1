#include <iostream>
#include "czas.h"

int main() {
    Czas czas1(4, 50, 5);
    Czas czas2(2, 55, 10);

    std::cout << "Czas 1: ";
    czas1.wyswietl();

    std::cout << "Czas 2: ";
    czas2.wyswietl();

    Czas suma = czas1.dodaj(czas2);
    std::cout << "Suma: ";
    suma.wyswietl();

    Czas roznica = czas1.odejmij(czas2);
    std::cout << "Roznica: ";
    roznica.wyswietl();

    std::string porownanie = czas1.porownaj(czas2);
    std::cout << "Porownanie: " << porownanie << std::endl;

    std::cout << "Czas 1 w sekundach: " << czas1.zamienNaSekundy() << std::endl;
    std::cout << "Czas 1 w minutach: " << czas1.zamienNaMinuty() << std::endl;
    std::cout << "Czas 1 w godzinach: " << czas1.zamienNaGodziny() << std::endl;

    return 0;
}
