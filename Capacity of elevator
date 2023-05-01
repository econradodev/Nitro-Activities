// say its the maximum capacity of the elevator was exceeded;

#include <iostream>
using namespace std;

//Programa para saber se a capacidade do elevador foi excedida.

int main() {

  int leituras, capacidadeMaxima, sairam, entraram, soma = 0, contador = 0;
  
  cin >> leituras >> capacidadeMaxima;

  for (int i=0; i<leituras; i++) {
    cin >> sairam >> entraram; 
    soma = soma + entraram - sairam; 
    
    if (soma > capacidadeMaxima) {
      contador++;
    }

  }

  if (contador > 0) {
    cout << 'S';
  } else {
    cout << 'N';
  }
  
  return 0;
}
