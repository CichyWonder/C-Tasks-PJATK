// zadanie38.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

float funkcja(float x, float y,float z, float &obj) {
	float pole, v=-1;

	if (x > 0 && y > 0 && z > 0) {
		pole = 2 * (x * y) + 2 * (x * z) + 2 * (y * z);
		obj = x * y * z;
		return pole;
	}
	else{
		return -1;
	}
}

int main()
{
	float a, b, h, obj=0;

	
	cout << " Podaj dlugosc figury" << endl;
	cin >> a;
	cout << " Podaj szerokosc figury" << endl;
	cin >> b;
	cout << " Podaj wyskosc figury" << endl;
	cin >> h;

	if (funkcja(a, b, h, obj) == -1) {
		cout << "podano ujemna dlugosc boku" << endl;
		return 0;
	}
	else {
		cout << funkcja(a, b, h, obj) << endl;
		cout << obj;
	}


}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
