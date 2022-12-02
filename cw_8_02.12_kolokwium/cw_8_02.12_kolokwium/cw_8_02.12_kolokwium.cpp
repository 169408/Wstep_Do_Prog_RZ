// cw_8_02.12_kolokwium.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

using namespace std;

// Zadanie 1
int secondToMax(int arg[], int length) {
    for (int j = 0; j < length; j++) {
        for (int k = 0; k < length - 1 - j; k++) {
            if (arg[k] > arg[k + 1]) {
                int temp = arg[k];
                arg[k] = arg[k + 1];
                arg[k + 1] = temp;
            }
        }
    }

    return arg[length - 2];
}

// Zadanie 2
string reversedText(string arg) {
    string reversed = arg;
    int sLength = arg.length();
    for (int i = 0; i < sLength; i++) {
        reversed[i] = arg[sLength - 1 - i];
    }

    return reversed;
}

//Zadanie 3
//int gcd(int arg1, int arg2) {
//    int lengthNum;
//    int counter = 0;
//    if (arg1 >= arg2) {
//        lengthNum = arg1;
//    } else {
//        lengthNum = arg2;
//    }
//
//    for (int s = 2; s < lengthNum; s++) {
//        if (arg1 % s == 0 && arg2 % s == 0) {
//            cout << s;
//            counter++;
//        }
//    }
//
//}

void randomNumbers() {
    int result = 0;
    int count5 = 0, count1 = 0;
    srand(time(NULL));
    while (count5 < 3 || count1 < 2) {
        result = rand() % 11 - 5;
        if (result == 5) {
            count5++;
            cout << result << " ";
        }
        else if (result == 1) {
            count1++;
            cout << result << " ";
        }
    }
}

int main()
{
    // Zadanie 1

    int arr[20];
    srand(time(NULL));
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size(arr); i++) {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << secondToMax(arr, length) << endl;

    // Zadanie 2

    string slovo;
    cout << "wpish slovo : ";
    cin >> slovo;
    
    cout << reversedText(slovo) << endl;

    // Zadanie 3

    //int num1, num2;
    //cout << "wpisz dwie calkowity liczby: ";
    //cin >> num1;
    //cin >> num2;

    // Zadanie 4

    randomNumbers();

    

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
