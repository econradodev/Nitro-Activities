#include <iostream>
using namespace std;

int main() {

  int n, contador = 0;
  
  int posicaoInicial [] = {4, 3} ; //coluna  , linha;

  cin >> n;

  int movimentos [n];

  for (int i = 0; i < n; i++) {
    cin >> movimentos [i];
  }

  for (int i = 0; i < n; i++) {
    if (movimentos [i] == 1) {
      posicaoInicial [0] += 1;
      posicaoInicial [1] += 2;
    } else if (movimentos [i] == 2) {
      posicaoInicial [0] += 2;
      posicaoInicial [1] += 1;
    } else if (movimentos [i] == 3) {
      posicaoInicial [0] += 2;
      posicaoInicial [1] -= 1;
    } else if (movimentos [i] == 4) {
      posicaoInicial [0] += 1;
      posicaoInicial [1] -= 2;
    } else if (movimentos [i] == 5) {
      posicaoInicial [0] -= 1;
      posicaoInicial [1] -= 2;
    } else if (movimentos [i] == 6) {
      posicaoInicial [0] -= 2;
      posicaoInicial [1] -= 1;
    } else if (movimentos [i] == 7) {
      posicaoInicial [0] -= 2;
      posicaoInicial [1] += 1;
    } else if (movimentos [i] == 8) {
      posicaoInicial [0] -= 1;
      posicaoInicial [1] += 2;
    }

    if (posicaoInicial[0] == 1 && posicaoInicial [1] == 3) {
      contador++;
      break;
    } else if (posicaoInicial[0] == 2 && posicaoInicial [1] == 3) {
      contador++;
      break;
    } else if (posicaoInicial[0] == 2 && posicaoInicial [1] == 5) {
      contador++;
      break;
    } else if (posicaoInicial[0] == 5 && posicaoInicial [1] == 4) {
      contador++;
      break;
    } else {
      contador++;
    }
  }

  cout << contador;
  

  return 0;
}
