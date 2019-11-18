// zadanie39.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int max2(int a, int b) {
	if (a > b) {
		return a;
	}
	else if(b > a){
		return b;
	}
}
int max3(int a, int b, int c) {
	
	int liczba = max2(a,b);
	
	if (liczba > c) {
		return liczba;
	}
	else if (c > liczba) {
		return c;
	}
}

int main()
{
	int x, y, z;

	cout << "podaj pierwsza liczbe" << endl;
	cin >> x;
	cout << "podaj druga liczbe" << endl;
	cin >> y;
	cout << "podaj trzecia liczbe" << endl;
	cin >> z;

	cout << max3(x, y, z) << endl;

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
