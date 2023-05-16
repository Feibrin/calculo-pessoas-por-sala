// Inclui a biblioteca de entrada e saída padrão
#include <iostream>
// Define o namespace padrão como std
using namespace std;
// Função principal do programa
int main(){
// Define a constante n como 6
const int n = 6;
// Cria um array chamado pessoas com n elementos e inicializa com os valores {35, 4, 22, 20, 36, 30}
int pessoas[n] = {35, 4, 22, 20, 36, 30};
// Inicializa a variável soma como 0
int soma = 0;
// Loop para somar os valores do array pessoas
for (int i = 0; i < n; i++) {
    soma += pessoas[i];
}
// Calcula a média de pessoas por sala
double media = soma / n;

// Imprime a média de pessoas por sala
cout << "Media de pessoas por sala: " << media << endl;
// Imprime as salas com número de pessoas acima da média
cout << "Salas com numero de pessoas acima da media: ";

// Loop para imprimir as salas com número de pessoas acima da média
for (int i = 0; i < n; i++) {
    if (pessoas[i] > media) {
        cout << i+1 << ";";
    }
}

// Pula uma linha
cout << endl;

// Inicializa as variáveis max, min, max_idx e min_idx
int max = 0, min = pessoas[0], max_idx = 1, min_idx = 1;

// Loop para encontrar a sala com o maior número de alunos e a sala com o menor número de alunos
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

// Imprime a sala com o maior número de alunos e a sala com o menor número de alunos
cout << "Sala com maior numero de alunos: " << max_idx << endl;
cout << "Sala com menor numero de alunos: " << min_idx << endl;

// Retorna 0 para indicar que o programa foi executado com sucesso
return 0;
}
