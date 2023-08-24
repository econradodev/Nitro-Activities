#include <iostream>
using namespace std;

int a, b, c;
int n;

int main() {
  cin >> a >> b >> c;

  if ((a>b)&&(a>c)) {
    if (b>c) {
      cout << b << endl;
    }
    if (c>b) {
      cout << c << endl;
    }
  }
  if ((b>a)&&(b>c)) {
    if (a>c) {
      cout << a << endl;
    }
    if (c>a) {
      cout << c << endl;
    }
  }
  if ((c>b)&&(c>a)) {
    if (a>b) {
      cout << a << endl;
    }
    if (b>a) {
      cout << b << endl;
    }
  }
  
  return 0;
}
