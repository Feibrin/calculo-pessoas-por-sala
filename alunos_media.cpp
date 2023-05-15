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
    
    int max = 0, min = pessoas[0], max_idx = 1, min_idx = 1;
    
    for (int i = 0; i < n; i++) {
        if (pessoas[i] > max) {
            max = pessoas[i];
            max_idx = i+1;
        } 
        if (pessoas[i] < min) {
            min = pessoas[i];
            min_idx = i+1;
        }
    }
    
    cout << "Sala com maior numero de alunos: " << max_idx << endl;
    cout << "Sala com menor numero de alunos: " << min_idx << endl;
    
    return 0;
}

//a utilização do array foi útil pois ele armazena uma sequência de elementos do mesmo tipo em uma única variável, no caso, pra armazenar a quantidade de pessoas por sala//
