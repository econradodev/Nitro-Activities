#include <iostream>
#include <string>
using namespace std;

int chars = 0, lowercase = 0, upperCase = 0, numbers = 0;
int countLower = 0, countUpper = 0, countNumbers = 0;
string password;

int main() {
  cin >> chars >> lowercase >> upperCase >> numbers;
  cin >> password;

  if (password.size() >= chars) {
    
    for (int i =0; i < password.size(); i++) {
      if (password[i] >= 97 && password[i] <= 122) {
        countLower++;
      }
    }

    if (countLower >= lowercase) {
      for (int i =0; i < password.size(); i++) {
        if (password[i] >= 65 && password[i] <= 90) {
          countUpper++;
        }
      }

      if (countUpper >= upperCase) {
        for (int i =0; i < password.size(); i++) {
          if (password[i] >= 48 && password[i] <= 57) {
            countNumbers++;
          }
        }

        if (countNumbers >= numbers) {
          cout << "Ok =/" << endl;
        } else {
          cout << "Ufa :)" << endl;
        }
      } else {
        cout << "Ufa :)" << endl;
      }
    } else {
      cout << "Ufa :)" << endl;
    }
  } else {
    cout << "Ufa :)" << endl;
  } 

  return 0;
}
