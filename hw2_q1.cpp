//
//  main.cpp
//  hw2_q1
//
//  Created by Aryan Dalal on 10/16/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int inpinteger;
    cout << "Please enter an integer between 9 and 12: ";
    cin >> inpinteger;
    
    if (inpinteger >= 9 && inpinteger <= 12) {
        string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        
        cout << "The corresponding month is: " << months[inpinteger-1] << endl;
    }
    
    else {
        cout << "Invalid Input." << endl;
    }
    
    
    return 0;
}
