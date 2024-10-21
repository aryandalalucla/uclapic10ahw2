//
//  main.cpp
//  hw2_q3
//
//  Created by Aryan Dalal on 10/17/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int secret = 11;
    const int games = 3;
    int usernumbinp;
    
    cout << "I have a secret number between 0-20, guess it, you have 3 times to try it out." << endl;
    
    for (int i = 1; i <= 3; i++) {
        cout << i << " try: ";
        cin >> usernumbinp;
        if (usernumbinp == secret) {
            cout << "Bingo, you are correct." << endl;
            return 0;
        }
        else if (usernumbinp >= 0 && usernumbinp < secret) {
            cout << "too small." << endl;
        }
        else if (usernumbinp > secret && usernumbinp <= 20) {
            cout << "too large." << endl;
        }
        else {
            cout << "invalid input." << endl;
        }
        if (i == games) {
            cout << "GAME failed" << endl;
        }
    }
    
    return 0;
}
