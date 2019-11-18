// zadanie4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x;
	float y;
	float z;
		cout << "Podaj liczby do rownania kwadratowego a,b,c:" << endl;
		cin >> x >> y >> z;
		float delta = y * y - 4 * x * z;
		cout << "Delta: " << delta << endl;
		
		if (delta == 0) {
				cout << "Rownanie ma jedno rozwiazanie" << endl;
			float x1 = -(y) / 2 * x;
				cout << x1;
		}
		else if (delta < 0) {
				cout << "delta nie ma rozwiazan";
		}
		else {
			float x2 = (-y + sqrt(delta)) / 2 * x;
			float x3 = (-y - sqrt(delta)) / 2 * x;
				cout << "Delta ma dwa rozwiazania" << endl;
				cout << "x1: " << x2 << endl;
				cout << "x2: " << x3;
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
