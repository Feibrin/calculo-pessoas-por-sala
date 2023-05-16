#include <iostream>
using namespace std;

int main(){
    
    // definindo o tamanho do vetor
    const int n = 6;
    // criando o vetor pessoas com os dados
    int pessoas[n] = {35, 4, 22, 20, 36, 30};
    // variável para guardar a soma das pessoas em todas as salas
    int soma = 0;
    
    // loop para somar as pessoas em todas as salas
    for (int i = 0; i < n; i++) {
        soma += pessoas[i];
    }
    
    // cálculo da média de pessoas por sala
    double media = soma / n;
    
    // imprimindo a média
    cout << "Media de pessoas por sala: " << media << endl;
    // imprimindo as salas com número de pessoas acima da média
    cout << "Salas com numero de pessoas acima da media: ";
    
    // loop para verificar as salas com número de pessoas acima da média
    for (int i = 0; i < n; i++) {
        // se o número de pessoas na sala i é maior do que a média
        if (pessoas[i] > media) {
            // imprime o número da sala
            cout << i+1 << ";";
        }
    }
    
    // pula uma linha para melhorar a visualização
    cout << endl;
    
    return 0;
}
