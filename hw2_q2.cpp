//
//  main.cpp
//  hw2_q2
//
//  Created by Aryan Dalal on 10/16/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int total1 = 0, total2 = 0, total3 = 0, total = 0, items, itemnumber = 0;
    const int usyeshawaiino = 5;
    const int usyeshawaiiyes = 10;
    const int usno = 20;
    string answer;
    
    cout << "How many items are you going to ship?: ";
    cin >> items;
    
    for (int i = 1; i <= items; i++) {
        while (itemnumber < items) {
            itemnumber = itemnumber + i;
            cout << "Item " << itemnumber << ":" << endl;
            cout << "Shipping to the US? (y/n): ";
            cin >> answer;
            if (answer == "y") {
                cout << "Shipping to the Hawaii? (y/n): " ;
                cin >> answer;
                if (answer == "y") {
                    cout << "Shipping fee: " << usyeshawaiiyes << endl;
                    total1 = usyeshawaiiyes * i;
                }
                else if (answer == "n") {
                    cout << "Shipping fee: " << usyeshawaiino << endl;
                    total2 = usyeshawaiino * i;
                }
            }
            else if (answer == "n") {
                cout << "Shipping fee: " << usno << endl;
                total3 = usno * i;
            }
            total = total1 + total2 + total3;
        }
    }
    cout << "Total shipping fee: " << total  << endl;
    return 0;
}
