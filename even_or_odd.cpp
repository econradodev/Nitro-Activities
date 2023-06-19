#include <iostream>
using namespace std;

// this program indicates who is the winner;

int matches = 0, fingersOfPlayer1 = 0, fingersOfPlayer2 = 0, test = 1;
string player1, player2;

int main() {

  while (cin >> matches && matches) { //gets times of matches;
    
    cout << "Test " << test << endl;

    cin >> player1; //gets name of player1;
    cin >> player2; //gets name of player2;

    while (matches--) { //decrease matches;
      cin >> fingersOfPlayer1 >> fingersOfPlayer2; //gets numbers of fingers;
      
      if ((fingersOfPlayer1+fingersOfPlayer2) % 2 == 0) { //said who's the winner;
        cout << player1 << endl;
      } else {
        cout << player2 << endl;
      }
    }
    test++;
  }

  if (matches == 0) {
    cout << endl;
  }  
  return 0;
}
