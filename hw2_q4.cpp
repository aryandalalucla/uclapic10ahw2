//
//  main.cpp
//  hw2_q4
//
//  Created by Aryan Dalal on 10/17/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    int multiples;
    int sum = 0;
    
    cout << "Input a number n: ";
    cin >> n;
    cout << "The first 10 multiples of " << n << " are: ";
    
    for (int i = 1; i <= 10; i++) {
        multiples = n * i;
        sum = sum + multiples;
        cout << multiples << " ";
    }
    
    cout << endl;
    cout << "The sum of these multiples is: " << sum << endl;
    
    return 0;
}
