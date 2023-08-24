#include <iostream>
using namespace std;

int CV, CE, FV, FE, CS, FS;
int saldo;

int main() {
  cin >> CV >> CE >> CS >> FV >> FE >> FS;
  
  CV = CV * 3;
  FV = FV * 3;

  if (CV + CE > FV + FE) {
    cout << 'C' << endl;
  }
  if (FV + FE > CV + CE) {
    cout << 'F' << endl;
  }

  if ((FV + FE)==(CV + CE)&&(CS==FS)) {
    cout << '=' << endl;
  }  else {
      if (FS > CS) {
        cout << 'F' << endl;
      }
      if (CS > FS) {
        cout << 'C' << endl;
      }
  }    
  
  
  return 0;
}
