#include <string>

class Czas {
	private:
		int godziny;
		int minuty;
		int sekundy;
		void naprawaDanych();
	public:

		Czas(int h = 0, int m = 0, int s = 0);
		int getGodziny() const;
		int getMinuty() const;
		int getSekundy() const;
		void setGodziny(int h);
		void setMinuty(int m);
		void setSekundy(int s);
		float zamienNaGodziny();
		float zamienNaMinuty();
		int zamienNaSekundy();
		Czas dodaj(Czas& czas1);
		Czas odejmij(Czas& czas1);
		std::string porownaj(Czas& czas1);
		void wyswietl();
};