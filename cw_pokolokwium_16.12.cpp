// cw_pokolokwium_16.12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

using namespace std;

//Zadanie 2

int ileZgodnych(int tab1[], int tab2[], int rozmiar) {
    int counter = 0;
    for (int l = 0; l < rozmiar; l++) {
        if (tab1[l] == tab2[l]) {
            cout << tab1[l] << " ";
            counter++;
        }
    }
    cout << endl;
    for (int l = 0; l < rozmiar; l++) {
        if (tab1[l] == tab2[l]) {
            cout << tab2[l] << " ";
        }
    }
    cout << endl;

    return counter;
}

//Zadanie 3

int tylkoLitery(string napis) {
    int count = 0;
    for (int f = 0; f < napis.length(); f++) {
        if (napis[f] >= 'a' && napis[f] <= 'z' || napis[f] >= 'A' && napis[f] <= 'Z') {
            napis[f] = napis[f];
        }
        else {
            napis[f] = '-';
            count++;
        }
    }
    cout << napis << endl;

    return count;
}

int main()
{

    //Zadanie 1

    int n;
    cout << "wpisz liczbe: ";
    cin >> n;
    int res = 0;
    int allres = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j != i) {
                cout << " + ";
            }
        }
        cout << " = " << res << endl;
        allres += res;
    }

    cout << "The sum of all results is: " << allres << endl;

    //Zadanie 2 
    srand(time(NULL));
    int tab1[7];
    int tab2[7];
    int length = sizeof(tab1) / sizeof(int);

    for (int k = 0; k < length; k++) {
        tab1[k] = rand() % 4;
        cout << tab1[k] << " ";
    }
    cout << endl;
    for (int k = 0; k < length; k++) {
        tab2[k] = rand() % 4;
        cout << tab2[k] << " ";
    }
    cout << endl;

    cout << "ilosc takich samych wartosc indeksow: " << ileZgodnych(tab1, tab2, length) << endl;

    //Zadanie 3
    string costam;
    cout << "wpisz slowo: ";
    cin >> costam;
    cout << " zwraca " << tylkoLitery(costam);

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
