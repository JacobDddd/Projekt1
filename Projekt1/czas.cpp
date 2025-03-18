#include <iostream>
#include "czas.h"

    int godziny;
    int minuty;
    int sekundy;
    
    void Czas::naprawaDanych(){
        if(sekundy>=60) {
            minuty+=sekundy/60;
            sekundy%=60;
        }
        if(minuty>=60){
            godziny+=minuty/60;
            minuty%=60;
        }
        if(sekundy<0){
            minuty-=(abs(sekundy)+59)/60;
            sekundy=(sekundy%60+60)%60;
        }
        if(minuty < 0){
            godziny-=(abs(minuty)+59)/60;
            minuty=(minuty%60+60)%60;
        }
    }

    Czas::Czas(int h,int m,int s){
        naprawaDanych();
    }

    int Czas::getGodziny() const{
        return godziny;
    }

    int Czas::getMinuty() const{
        return minuty;
    }

    int Czas::getSekundy() const{
        return sekundy;
    }

    void Czas::setGodziny(int h) {
        godziny=h;
        naprawaDanych();
    }

    void Czas::setMinuty(int m) {
        minuty=m;
        naprawaDanych();
    }
    
    void Czas::setSekundy(int s) {
        sekundy=s;
        naprawaDanych();
    }

    float Czas::zamienNaGodziny() {
        return godziny+minuty/60.0+sekundy/3600.0;
    }

    float Czas::zamienNaMinuty() {
        return godziny * 60 + minuty + sekundy/60.0;
    }

    int Czas::zamienNaSekundy() {
        return godziny*3600+minuty*60+sekundy;
    }
    

    Czas Czas::dodaj(Czas & czas1) {
        return Czas(godziny+czas1.godziny, minuty+czas1.minuty, sekundy+czas1.sekundy);
    }

    Czas Czas::odejmij(Czas & czas1) {
        return Czas(godziny-czas1.godziny, minuty-czas1.minuty, sekundy-czas1.sekundy);
    }

    std::string Czas::porownaj(Czas& czas1) {
        Czas wynik = Czas(godziny - czas1.godziny, minuty - czas1.minuty, sekundy - czas1.sekundy);
        if (wynik.godziny < 0)
            return "Czas 2 jest wiekszy";
        else
            return "Czas 1 jest wiekszy";
    }

    void Czas::wyswietl() {
        if (godziny < 0) {
            std::cout << "Czas wynosi, godzina :" << -godziny-1 << " minuta:" << -minuty+59 << " sekunda:" << -sekundy+60 << std::endl;
        }
        else {
            std::cout << "Czas wynosi, godzina :" << godziny << " minuta:" << minuty << " sekunda:" << sekundy << std::endl;
        }
    }
