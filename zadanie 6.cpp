// zadanie 6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int x= rand() % 6 + 1, y= rand() % 6 + 1;
	srand(time(NULL));
	
	cout << x << endl;
	cout << y << endl;
	

	if (x <= 6 && y <= 6) {
		cout << " " << endl;

		if (x % 2 == 0) {
			if (y == 2 || y == 4 || y == 5) {
				int wygrana1 = x + 3 * y;
				cout << "wygrales tyle!!" << wygrana1 << endl;
			}
			else {
				int wygrana2 = 2 * y;
				cout << "wygrales tyle!!" << wygrana2 << endl;
			}
		}
		else {
			if (y == 2 || y == 4 || y == 5) {
				if (x == y) {
					int wygrana3 = 5 * x + 3;
					cout << "wygrales tyle!!" << wygrana3 << endl;
				}
				else {
					int wygrana4 = 2 * y + y;
					cout << "wygrales tyle!!" << wygrana4 << endl;
				}
			}
			else {
				int wygrana5 = (2 * y) + (y + 5);
				cout << "wygrales tyle!!" << wygrana5 << endl;
			}
		}
	}
	else {
		cout << "podaj liczbe od 1 do 6" << endl;
	}
	return 0;
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
