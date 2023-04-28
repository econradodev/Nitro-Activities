#include <iostream>
using namespace std;

int main() {
  int n, soma = 0, contador;
  cin >> n;

  int notas [n];

  for (int i=0; i<n; i++) {
    cin >> notas [i];
  }
  
  for (int i=0; i<n; i++) {
    soma += notas [i];
  }

  soma = soma/n;
  contador = 0;

  for (int i=0; i<n; i++) {
   if (notas [i] > soma) {
      contador++;
    }
  }

  cout << contador;

  return 0;
}
