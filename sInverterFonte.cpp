#include <iostream>

using namespace std;

void iString(char* str) {
    int t = 0;
    while (str[t] != '\0') {
        t++;
    }

    for (int i = 0; i < t / 2; i++) {
        char temp = str[i];
        str[i] = str[t - 1 - i];
        str[t - 1 - i] = temp;
    }
}

int main() {
    char entrada[100];
    cout << "Digite um texto: ";
    cin.getline(entrada, 100);

    cout << "texto original: " << entrada << endl;
    inverteString(entrada);
    cout << "texto invertido: " << entrada << endl;

    return 0;
}
