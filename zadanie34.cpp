// zadanie34.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

float potega(float x, float  y) {
	
	int a=1;
	
	for (int i = 1; i <= y; i++) {
		a = x * a;
	} 
	return a;

}

int main()
{
	float a, b, c, n;
	
	cout << " Podaj kolejno liczby a, b, c, n : ";
	cin >> a >> b >> c >> n;

		float a1 = 1;
		a1 = potega(a,n);
	
		float b1 = 1;
		b1 = potega(b,n+5);
	
		float c1 = 1;
		c1 = potega(c, n*2+1);
	
		float wynik = (a1 + b1) / c1;
	cout << " Wartosc wyrazenia to " << wynik;
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
