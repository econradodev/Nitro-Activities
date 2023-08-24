#include <iostream>
using namespace std;

int main() {
  
  int n, m;
  cin >> n;
  int pessoasNaFila [n];
   
  for (int i=0; i < n; i++) {
    cin >> pessoasNaFila [i];
  }

  cin >> m;
  int pessoasQueSairam [m];

  for (int i=0; i < m; i++) {
    cin >> pessoasQueSairam [i];
  }     

  int posicaoDoDesistente = -1;
  int contador = 0;

  while (contador < m) {

    for (int i=0; i < n; i++) {
      if (pessoasQueSairam [contador] == pessoasNaFila [i]) {
        pessoasNaFila [i] = 0;
      } 
    }
     
    contador++;
  } 
   
  for (int i=0; i < n; i++) {
    if (pessoasNaFila [i] != 0) {
    cout << pessoasNaFila [i] << " ";
    }
  }
  
  return 0;
}
