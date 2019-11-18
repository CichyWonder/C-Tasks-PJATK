// zadanie41.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	int x, a, b, n, tab[100], wynik=0;

	cout << "podaj dwie liczby w przedziale od 0 do 100" << endl;
	cin >> a >> b;
	cout << "podaj rozmiar tablicy" << endl;
	cin >> n;
	cout << "podaj liczbe ktora chcesz znalezc" << endl;
	cin >> x;

	for (int i = 0; i <= n - 1; i++) {
		tab[i] = rand() % (b - a + 1) + a;
		cout << tab[i] << endl;

		if (x == tab[i]) {
			wynik = wynik + 1;
		}

	}
	cout << "liczba " << x << " wystpaila " << wynik << " razy" << endl;
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
