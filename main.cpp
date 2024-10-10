#include <iostream>
using namespace std;

int input(int a){
    int r;
    while (a<0){
        cout << "Non sono ammessi valori negativi. Riprova" << endl;
        cin >> a;
    }
    r= a;
    return r;
}

int somma(int a, int b){
    int r;
    r = a+b;
    return r;
}

int sottrazione(int a, int b){
    int r;
    r = a-b;
    return r;
}

int moltiplicazione(int a, int b){
    int r;
    r = a*b;
    return r;
}

float divisione(int a, int b){
    float r;
    r = a/b;
    return r;
}

int potenza(int a, int b){
    int r, i, aVero;
    aVero = a;
    for (i=0; i<=-2; i++){
        a=a*aVero;
    }
    r = a;
    return r;
}

int main() {
    int a, b;
    float r;
    cout << "Inserisci il primo valore" << endl;
    cin >> a;
    a = input(a);
    cout << "Inserisci il secondo valore" << endl;
    cin >> b;
    b = input(b);
    r = somma(a,b);
    cout << "Risultato somma: " << r << endl;
    r = sottrazione(a,b);
    cout << "Risultato sottrazione: " << r << endl;
    r = moltiplicazione(a,b);
    cout << "Risultato moltiplicazione: " << r << endl;
    r = divisione(a,b);
    cout << "Risultato divisione: " << r << endl;
    r = potenza(a,b);
    cout << "Risultato potenza: " << r << endl;
}