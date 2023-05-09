#include <iostream>
using namespace std;

int main(){
    
    const int n = 6;
    int pessoas[n] = {35, 4, 22, 20, 36, 30};
    int soma = 0;
    
    for (int i = 0; i < n; i++) {
        soma += pessoas[i];
    }
    
    double media = soma / n;
    
    cout << "Media de pessoas por sala: " << media << endl;
    cout << "Salas com numero de pessoas acima da media: ";
    
    for (int i = 0; i < n; i++) {
        if (pessoas[i] > media) {
            cout << i+1 << ";";
        }
    }
    
    cout << endl;
    
    return 0;
}