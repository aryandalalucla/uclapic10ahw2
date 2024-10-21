//
//  main.cpp
//  hw2_q5
//
//  Created by Aryan Dalal on 10/17/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int terminate = 0;
    int shapenumber;
    
    cout << "This is a game to daw shapes, please enter a number: ";
    cin >> shapenumber;
    
    while (shapenumber != terminate) {
        for (int i = 1; i <= shapenumber; i++) {
            if (shapenumber % 2 == 0) {
                for (int j = 1; j <= shapenumber; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            else if (shapenumber % 2 != 0) {
                for (int w = 1; w <= i; w++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
        cout << "continue: ";
        cin >> shapenumber;
    }
    return 0;
}
